class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int large = arr[0];
        
        for(int i = 0; i<n; i++){
            if(arr[i] > large){
                large = arr[i];
            }
        }
        return large;
    }
};
