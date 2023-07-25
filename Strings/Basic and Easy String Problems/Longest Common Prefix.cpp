#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  string longestCommonPrefix(vector<string>& strs) {
	string result;
	sort(strs.begin(), strs.end());
	string first = strs[0];
	string last = strs[strs.size()-1];

	for(int i =0; i<first.length(); i++){
		if(first[0] != last[0]) return "";
		if(first[i] == last[i]){
			result = result + first[i];
		}
		else{
			break;
		}
		
	}
	return result;
    }
};
