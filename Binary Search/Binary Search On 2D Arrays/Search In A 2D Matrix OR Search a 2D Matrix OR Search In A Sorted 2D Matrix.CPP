bool searchMatrix(vector<vector<int>>& mat, int target) {
      
    int n = mat.size();
    int m = mat[0].size();
    int start = 0;
    int end = (n * m) -1 ;

    while(start<=end){
        int mid = start + (end - start) / 2;

        if(mat[mid/m][mid%m] == target){
            return true;
        }
        if(mat[mid/m][mid%m] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return false;
}
