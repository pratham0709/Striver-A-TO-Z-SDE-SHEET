pattern 1:

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
    void printpatt1(int n) {
        // code here
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }

pattern 2:

* 
* * 
* * * 
* * * * 
* * * * *
    void printTriangle(int n) {
        // code here
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }

pattern 3 :

1
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5

    void printTriangle(int n) {
        // code here
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

pattern 4:

1
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5

    void printTriangle(int n) {
        // code here
        for(int i =1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }

pattern 5:

* * * * *
* * * * 
* * * 
* *  
*

	void printTriangle(int n) {
	    // code here
	    for(int i=1; i<=n; i++){
	        for(int j=0; j<n-i+1; j++){
	            cout<<"*"<<" ";
	        }
	        cout<<endl;
	    }
	}

pattern 6:

1 2 3 4 5
1 2 3 4
1 2 3 
1 2  
1
	void printTriangle(int n) {
	    // code here
	    for(int i=1; i<=n; i++){
	        for(int j=1; j<=n-i+1; j++){
	            cout<<j<<" ";
	        }
	        cout<<endl;
	    }
	}

pattern 7:

    *
   ***  
  *****
 *******
*********

    void printTriangle(int n) {
        // code here
        for(int i = 0; i<n; i++){
            // For Space
            for(int j=0; j<n-i-1; j++){
                cout<<" ";
            }
            // For Star
            for(int j=0; j< 2*i+1; j++){
                cout<<"*";
            }
            // For Space
            for(int j=0; j<n-i-1; j++){
                cout<<" ";
            }
            cout<<endl;
        }
    
    }

pattern 8:

*********
 *******
  *****
   ***
    *

	
	void printTriangle(int n) {
	    // code here
	    for(int i=0; i<n; i++){
	        // for Space
	        for(int j=0; j<i; j++){
	            cout<<" ";
	        }
	        // For star
	        for(int j=0; j<2*n -(2*i+1); j++){
	            cout<<"*";
	        }
	         // for Space
	        for(int j=0; j<i; j++){
	            cout<<" ";
	        }
	        cout<<endl;
	        
	    }
	}

pattern 9:

    *
   * *  
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *

    void printDiamond(int n) {
        // code here
        int k;
            for(int i=0; i<n; i++){
                // for space
                for(int j=0; j<n-i-1; j++){
                    cout<<" ";
                }
                // for star
                for(int j=0; j<i+1; j++){
                    cout<<"* ";
                }
                //for space
                for(int j=0; j<n-i-1; j++){
                    cout<<" ";
                }
                cout<<endl;
            }
                k=n;
            for(int i=0; i<n; i++){
                // for space
                for(int j=0; j<i; j++){
                    cout<<" ";
                }
                // for star
                for(int j=0; j<k; j++){
                    cout<<"* ";
                }
                for(int j=0; j<i; j++){
                    cout<<" ";
                }
                cout<<endl;
                k--;
            }
    }

pattern 10:

* 
* * 
* * * 
* * * * 
* * * * *
* * * *
* * *
* *
*

    void printTriangle(int n) {
        // code here
        for(int i =1; i<=2*n-1; i++){
        int stars=i;
        if(i>n){
           stars=2*n-i;
        }
        for(int j=1; j<=stars; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    }

pattern 11:

1 
0 1 
1 0 1
0 1 0 1 
1 0 1 0 1

    void printTriangle(int n) {
        // code here
        int start=1;
        for(int i=0; i<n; i++){
            if(i % 2 ==0) start = 1;
            else start=0;
            for(int j=0; j<=i; j++){
                cout<<start<<" ";
                start = 1 - start;
            }
            cout<<endl;
        }
    }

pattern 12:

1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

    void printTriangle(int n) {
        // code here
        //  int i, j;
        int space= 2*(n-1);
        for(int i=1; i<=n; i++){
        //number
            for(int j=1; j<=i; j++){
                cout<<j<<" ";
            }
        
        //space
            for(int j =1; j<=space; j++){
                cout<<" "<<" ";
            }
        //number
            for(int j = i; j>=1; j--){
                 cout<<j<<" ";
            }
            
            cout<<endl;
            space -= 2;
        }    
    }
pattern 13:

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15

    void printTriangle(int n) {
        // code here
        int count=1;
        for(int i=1; i<=n; i++){
            for(int j= 1; j<=i; j++){
                cout<<count<<" ";
                count = count + 1;
            }
            cout<<endl;
        }
    }

pattern 14:

A
AB
ABC
ABCD
ABCDE

    void printTriangle(int n) {
        // code here
        for(int i=1; i<=n; i++){
            for(char ch= 'A'; ch<'A'+ i; ch++){
                cout<<ch;
            }
            cout<<endl;
        }
    }

pattern 15:

ABCDE
ABCD
ABC
AB
A

    void printTriangle(int n) {
        // code here
        for(int i = 0; i<n; i++){
            for(char ch='A'; ch<= 'A'+ (n-i-1); ch++){
                cout<<ch;
            }
            cout<<endl;
        }
    }

pattern  16:

A
BB
CCC
DDDD
EEEEE

    void printTriangle(int n) {
        // code here
        for(int i=0; i<n; i++){
            char ch ='A' + i;
            for(int j=0; j<=i; j++){
                cout<<ch;
            }
            cout<<endl;
        }
    }

pattern 17:

   A
  ABA
 ABCBA
ABCDCBA

    void printTriangle(int n) {
        // code here
        for(int i =0; i<n; i++){
            // space
            for(int j=0; j<n-i-1; j++){
                cout<<" ";
            }
            //char
            char ch= 'A';
            int breakpoint = (2*i+1)/2;
            for(int j=1; j<=2*i+1; j++){
                cout<<ch ;
                if(j<=breakpoint) ch++;
                else ch--;
            }
            
            // space
            for(int j=0; j<n-i-1; j++){
                cout<<" ";
            }
            cout<<endl;
        }
    }

pattern 18:

E
E D
E D C
E D C B
E D C B A

    void printTriangle(int n) {
        // code here
        for(int i=0; i<n; i++){
            char ch ='A'+ n -1;
            for(int j=0; j<=i; j++){
                cout<<ch<<" ";
                ch--;
            }
            cout<<endl;
        }
    }

pattern 19:

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

    void printTriangle(int n) {
        // code here
        int iniS =0;
        for(int i =0; i<n; i++){
            // Stars
            for(int j=0; j<n-i; j++){
                cout<<"*";
            }
            // Spaces
            for(int j=0; j<iniS; j++){
                cout<<" ";
            }
            // Stars
             for(int j=0; j<n-i; j++){
                cout<<"*";
            }
            
            iniS += 2;
            cout<<endl;
        }
        
        iniS = 2*n -2;
        for(int i =1; i<=n; i++){
            // iniS -= 2;
            // Stars
            for(int j= 1; j<=i; j++){
                cout<<"*";
            }
            // Spaces
            for(int j=0; j<iniS; j++){
                cout<<" ";
                
            }
            // Stars
             for(int j=1; j<=i; j++){
                cout<<"*";
            }
            iniS -= 2;
            cout<<endl;
            
            
        }
    }

pattern 20:

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

    void printTriangle(int n) {
        // code here
        int spaces= 2*n-2;
        for(int i=1; i<=2*n-1; i++){
            // Stars
            int stars =i;
            if(i>n) stars = 2*n -i;
            for(int j=1; j<=stars; j++){
                cout<<"*";
            }
            // Spaces
            for(int j=1; j<=spaces; j++){
                cout<<" ";
            }
            // Stars
            for(int j=1; j<=stars; j++){
                cout<<"*";
            }
            cout<<endl;
            if(i<n) spaces-=2;
            else spaces+=2;
        }
    }
