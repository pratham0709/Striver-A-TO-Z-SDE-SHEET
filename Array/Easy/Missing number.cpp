int missingNumber(int A[], int N)
{
    // Your code goes here
    int xor1 = 0;
    int xor2 = 0;
    
    for(int i=0; i<N-1; i++){
        xor2 = xor2 ^ A[i];
        xor1 = xor1 ^ (i+1); 
    }
    xor1 = xor1^ N;
    return xor1 ^ xor2;
}