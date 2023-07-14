int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int start = 0;
	int end = n-1;
	// int mid = start +(end - start) /2;

	while(start<=end){
        int mid = start +(end - start) /2;
		if(arr[mid] == k) return mid;

        // LEFT PART
        if(arr[start] <= arr[mid])
        {
           if(arr[start] <= k && k <= arr[mid]){
                end = mid - 1; 
            }
            else{
                start = mid + 1;
            }
        }
        else{
            if(arr[mid] <= k && k <= arr[end])
            {
                    start = mid + 1;
            }
            else{
                    end = mid - 1;
                }              
            
        }
		
	}
	return -1;
}
