#include <bits/stdc++.h> 
bool compare(int a, int b){
    if( a < b){
        return true;
    }
    return false;
}

void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    sort(arr.begin(), arr.end(), compare);
}
