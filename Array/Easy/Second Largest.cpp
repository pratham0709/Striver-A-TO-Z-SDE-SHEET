class Solution{
public:	
	// Function returns the second
	int secondlargest(int arr[], int n){
    int largest = arr[0];
    int slargest = -1;

    for(int i =0; i<n; i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}

	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	int slargest = secondlargest(arr, n);
    // int ssmallest = secondsmallest(arr, n);
    return slargest;
	}
};





// if question says second largest and second smallest element then use thise ....

int secondlargest(vector<int> &arr, int n){
    int largest = arr[0];
    int slargest = -1;

    for(int i =0; i<n; i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}

int secondsmallest(vector<int> &arr, int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    
    for(int i = 1; i<n; i++){
        if(arr[i] < smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < ssmallest){
            smallest = arr[i];
        }
    }
    return ssmallest;
}
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    int slargest = secondlargest(arr, n);
    int ssmallest = secondsmallest(arr, n);
    return {slargest, ssmallest};
    
}
