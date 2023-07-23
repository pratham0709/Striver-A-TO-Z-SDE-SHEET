#include <bits/stdc++.h> 
int oneIteration(vector<int> A)
{
    // Write your code here.
    int n = A.size(); 
    int largest = A[0];
    int slargest = 0;
    for(int i=0; i<n; i++){
        if(A[i] > largest){
            slargest = largest;
            largest = A[i];
        }
        else if(A[i] < largest && A[i] >slargest){
            slargest = A[i];
        }
    }
    int ans = largest + slargest;
    return ans;  
}
