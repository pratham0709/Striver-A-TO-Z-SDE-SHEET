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
