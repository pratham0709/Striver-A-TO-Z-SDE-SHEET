int searchInsert(vector<int>& arr, int m)
{
	// Write your code here.
	int n = arr.size();
	int start = 0;
	int end = n-1;

	int mid = start +(end - start) /2;
	int ans = n;
	while(start<=end){
		
		if(arr[mid]>= m){
			ans = mid;
			end = mid - 1;
		}
		else{
			start = mid + 1;
		}
		mid = start + (end - start) /2;
	}
	return ans;
	
}