#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	sort(arr.begin(), arr.end());
	int start = 0;
	int end = n - 1;

	while(start<=end){
		int mid = start + (end - start) / 2;
		if(arr[mid] == arr[mid - 1] || arr[mid] == arr[mid + 1]){
			// int x = arr[mid];
			return arr[mid];
		}
		else if(arr[mid] > mid){
			start = mid + 1;
		}
		else{
			end = mid - 1;
		}
	}
	return -1;
}
