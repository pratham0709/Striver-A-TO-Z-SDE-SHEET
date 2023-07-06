class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int i = 0;
        for(int j =0 ; j<n; j++){
            if(a[i] != a[j]){
                a[i+1] = a[j];
                i++;
            }
        }
        return (i+1); 
    }
};