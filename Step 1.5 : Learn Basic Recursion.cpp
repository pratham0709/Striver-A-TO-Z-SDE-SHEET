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
