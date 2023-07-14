class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = nums.size();
        if(n==0)return {-1,-1};
        //First Binary search to find first true for the condition nums[m] >= target
        int l = 0, h = n-1;
        while(l<h){
            int m = l + (h-l)/2;
            
            if(nums[m]>=target){
                h = m;
            }
            else{
                l  = m+1;
            }
            
        }
        
        if(nums[l]!=target) return {-1,-1};//To check either target is present or not
        
        int startIndex = l ;
        
        //Second binary search to find last false for the condition nums[m]>target
        
        l = 0;
        h = n-1;
        
        while(l<h){
            
            int m = l + (h-l+1)/2;
            
            if(nums[m]>target){
                h = m;
            }
            else{
                l = m-1;
            }
            
        }
        
        int endIndex = l;
        
        return {startIndex,endIndex};
        
        
    }
};