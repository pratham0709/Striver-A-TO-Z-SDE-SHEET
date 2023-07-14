int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int start = 0;
	int end = n-1;

	int mid = start +(end - start) /2;
	int ans = n;
	while(start<=end){
		
		if(arr[mid]> x){
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