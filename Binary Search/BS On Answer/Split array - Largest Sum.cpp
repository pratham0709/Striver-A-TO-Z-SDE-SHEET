class Solution {
public:
    int countStudents(vector<int> &nums, int k) {
    int n = nums.size(); //size of array.
    int students = 1;
    long long pagesStudent = 0;
    for (int i = 0; i < n; i++) {
        if (pagesStudent + nums[i] <= k) {
            //add pages to current student
            pagesStudent += nums[i];
        }
        else {
            //add pages to next student
            students++;
            pagesStudent = nums[i];
        }
    }
    return students;
}
    
    
    
    
    int splitArray(vector<int>& nums, int k) {
    int n = nums.size();
    if (k > n) return -1;

    int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);
    while (low <= high) {
        int mid = (low + high) / 2;
        int students = countStudents(nums, mid);
        if (students > k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return low;
    }
};
