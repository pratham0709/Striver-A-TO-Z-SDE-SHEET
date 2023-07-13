#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> v) {
	// Write your code here
	// Using Hashing approch
	map<int,int>mpp;
	for(int i=0; i<v.size(); i++){
		mpp[v[i]]++;
	}
	for(auto it: mpp){
		if(it.second > v.size() / 2){
			return it.first;
		}
	}
	return -1;
	
}