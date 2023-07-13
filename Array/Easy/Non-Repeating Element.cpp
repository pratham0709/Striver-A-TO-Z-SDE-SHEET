class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        // Complete the function
        map<int,int>mpp;
        
        for(int i =0; i<n; i++){
                mpp[arr[i]]++;
        }
        for(int i=0; i<n; i++){
            if(mpp[arr[i]] == 1) return arr[i];
            
        }
        return -1;
    } 
  
};
