// que 1 :Print GFG n times without the loop. (gfg)
class Solution {
  public:
    int i = 1;
    void printGfg(int N) {
        // Code here
        if(i > N){
            return;
        }
        cout<<"GFG"<<" ";
        i++;
        printGfg(N);
    }
};

// que 2: Print numbers from 1 to N without the help of loops. (gfg)

class Solution{
    public:
    //Complete this function
    int i = 1;
    void printNos(int N)
    {
        //Your code here
    
        if(i > N){
            return;
        }
        cout<<i<<" ";
        i = i+1;
        printNos(N);
    }
};

// que: Print numbers from N to 1 (space separated) without the help of loops. (gfg)
// Input:
// N = 10
// Output: 10 9 8 7 6 5 4 3 2 1

class Solution {
  public:
    int i = 1;
    void printNos(int N) {
        // code here
        if(N < 1){
            return;
        }
        cout<<N<<" ";
        N--;
        printNos(N);
    }
};

// que 4: Sum of first n terms (gfg)
// problem statement: Given and integer N.Calculate the sum of series 13 + 23 + 33 + 43 + … till N-th term.
// Input:
// N=5
// Output:
// 225
// Explanation:
// 13+23+33+43+53=225

class Solution {
  public:
    long sum = 0;
    long long sumOfSeries(long long N) {
        // code here
        if(N == 0) return 0;
        sum=(N*N*N) +sumOfSeries(N-1);
        return sum;
    }
};


// Factorial of N

#include<bits/stdc++.h>
using namespace std;

fact(int n){
	if(n == 1){
		return 1;
	}
	return n * fact(n-1); 
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}


// Reverse an array using Recursion

#include<bits/stdc++.h>
using namespace std;

void f(int i, int arr[], int n){
	if( i>= n/2){
		return;
	}
	swap(arr[i], arr[n-i-1]);
	f(i+1, arr, n); 
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    f(0, arr, n);
    for(int i =0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}
