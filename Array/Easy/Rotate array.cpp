class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    
    // Brute Force Approch{
    //     k = k % nums.size();
	   
	  //  int temp[k];
	  //  for(int i =0; i<k; i++){
	  //      temp[i] = nums[i];
	  //  }
	   
	  //  // Shifting
	  //  for(int i = k; i<nums.size(); i++){
	  //      nums[i-k] = nums[i];
	  //  }
	   
	  //  // reverse back temp
	  //  for(int i = nums.size() - k; i<nums.size(); i++){
	  //      nums[i] = temp[i - (nums.size() - k)];
	  //  }
    // }


        //Optimal solutions
		k=k%nums.size();
        reverse(nums.begin(),nums.begin()+(nums.size()-k));

        reverse(nums.begin()+(nums.size()-k),nums.end());
    
        reverse(nums.begin(),nums.end());
    }
};