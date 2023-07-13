int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    if(a.size() == 0) return 0;
    sort(a.begin(), a.end());
    int n = a.size();
    int lastsmaller = INT_MIN;
    int cnt = 0;
    int longest = 1;

    for(int i = 0; i<n; i++){
        if(a[i] -1 == lastsmaller){
            cnt = cnt + 1;
            lastsmaller = a[i];
        }
        else if(lastsmaller != a[i]){
            cnt = 1;
            lastsmaller = a[i];
        }
        longest = max(longest,cnt);
    }
    return longest;
}