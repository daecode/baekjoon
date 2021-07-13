int range_counting_sort(int A[], int B[], int n ){
    int C[n+1];
    int i;

    for (i=0; i< n+1; i++)
        C[i]=0;

    for (i=0; i< n ;i++)
        C[A[i]] = C[A[i]]+ 1;


    for (i=1; i< n+1; i++)
        C[i]=C[i]+C[i-1];

    for(i = n -1; i>=0 ; i--){
        B[C[A[i]]] = A[i];
        C[A[i]] = C[A[i]] - 1;
    }
    for(i=0; i<= n-1 ; i++){
        if (A[0]==B[i]){
            return i-1;}
    }



}


