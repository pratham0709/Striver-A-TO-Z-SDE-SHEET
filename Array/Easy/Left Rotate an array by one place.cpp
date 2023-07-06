class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	   k = k % n;
	   
	   int temp[k];
	   for(int i =0; i<k; i++){
	       temp[i] = arr[i];
	   }
	   
	   // Shifting
	   for(int i = k; i<n; i++){
	       arr[i-k] = arr[i];
	   }
	   
	   // reverse back temp
	   for(int i = n - k; i<n; i++){
	       arr[i] = temp[i - (n - k)];
	   }
	} 
		 

};