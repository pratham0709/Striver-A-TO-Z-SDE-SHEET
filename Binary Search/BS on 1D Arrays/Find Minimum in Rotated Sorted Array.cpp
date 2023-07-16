class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = nums.size() - 1;
        int ans = INT_MAX;
        while(start<=end){
            int mid = start + (end - start) / 2;

            //left part
            if(nums[start]<= nums[mid]){
                ans = min(ans, nums[start]);
                start = mid + 1;
            } 
            else {
                end = mid - 1;
                ans = min(ans, nums[mid]);
            }
        }
        return ans;
    }
};
