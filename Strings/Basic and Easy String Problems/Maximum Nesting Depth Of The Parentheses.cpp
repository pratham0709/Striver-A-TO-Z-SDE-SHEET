int maxDepth(string s) {
	// Write your code here.
	int n = s.length();
	int count; 
	int close;
	int maxi = 0;
	for(int i =0; i<n; i++){
		if(s[i] == '('){
			count ++;
		}
		maxi= max(count,maxi);
		if(s[i] == ')'){
			count--;
		}
		
	}
	if(count == close){
		return maxi;
	}
	
}

