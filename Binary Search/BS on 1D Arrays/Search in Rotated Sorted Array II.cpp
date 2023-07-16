class Solution {
public:
    bool search(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size()-1;

    while(start<=end){
        int mid = start + (end - start) /2;

        if(nums[mid] == target) return true;
        if(nums[start] == nums[mid] && nums[mid] == nums[end]){
            start = start +1;
            end = end - 1;
            continue;
        }

        if(nums[start] <= nums[mid]){
            if(nums[start] <= target && target <= nums[mid]){
                end = mid -1;
            }
            else{
                start = mid + 1;
            }
        }
        else{
            if(nums[mid] <= target && target <= nums[end]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return false;
    }
};
