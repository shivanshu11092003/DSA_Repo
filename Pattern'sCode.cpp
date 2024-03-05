#include <bits/stdc++.h>
using namespace std;
void Patterns12(int n){


/*
1        1
12      21
123    321
1234  4321
1234554321 
*/

    int space = 2*(n-1);
    for(int i=1;i<=n;i++){
        //Numbers

        for(int j=1;j<=i;j++){
            cout<<j;
        }

        //space
        for (int j = 1; j<=space; j++)
        {
            cout<<" ";
        }
        space-=2;
        //number
        for(int j=i;j>=1;j--){
            cout<<j;

        }
        cout << endl;
        

    }



}
void Patterns11(int n){
/*

0
10
010
1010
01010
*/
    int give=1;
    for(int i=1;i<=n;i++){
        if(i%2==0) give=1;
        else give=0;
        for(int j=1;j<=i;j++){
            cout<<give;
            give=1-give;
        }
        cout<<endl;

    }

}
void Patterns13(int n){
/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

*/    
    int c=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            c+=1;
            cout<<c<<" ";
        }
        cout<<endl;
    }

}
void Patterns14(int n){
/*
A B 
A B C 
A B C D 
A B C D E 
A B C D E F 

*/
    for(int i=1;i<=n;i++){
        for(char j='A';j<='A'+i;j++){
            cout<<j<<" ";
        }
        cout<<endl;

    }
}
void Patterns15(int n){
//easy just add n-i in Patterns 15

}
void Patterns16(int n){
/*
A
BB
CCC
DDDD
EEEEE
FFFFFF

*/
    for(int i=0;i<=n;i++){
        char p='A'+i;
        for(int j=0;j<=i;j++){
            cout<<p;
        }
        
        cout<<endl;
    }
}
void Patterns17(int n){
/*
     A     
    ABA    
   ABCBA   
  ABCDCBA  
 ABCDEDCBA 
ABCDEFEDCBA

*/
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        char ch='A';
        int br=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=br) ch++;
            else ch--;


        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void Patterns18(int n){
    //E-i
    

}
void Patterns19(int n){

/*     
************
*****  *****
****    ****
***      ***
**        **
*          *
*          *
**        **
***      ***
****    ****
*****  *****
************

*/
    int space=0;
    for(int i=0;i<n;i++){
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        //space
        
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        //star
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        space +=2;
        cout<<endl;
        
    }
    
    space=2*n-2;
    for(int i=1;i<=n;i++){
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //space
        
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        //star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        space -= 2;
        cout<<endl;
    }

}
void Patterns20(int n){
/*
*            *
**          **
***        ***
****      ****
*****    *****
******  ******
**************
******  ******
*****    *****
****      ****
***        ***
**          **
*            *

*/
    int space=2*n;
    for(int i=0;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        //space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";

        }
        cout<<endl;
        if(i<n) space -=2;
        else space +=2;
    }

}
void Patterns21(int n){
/*
*******
*     *
*     *
*     *
*     *
*     *
*******

*/
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0||i==n-1||j==n-1){
                cout<<"*";
            }
            else cout<<" ";
            
        }
        cout<<endl;
    }
}
void Patterns22(int n){
/*
*******
*     *
*    * 
*   *  
*  *   
* *    
** 

*/
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||j==n-i){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}
void Patterns23(int n){
/*
*******
   *   
   *   
   *   
   *   
   *   
   *   
*/
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==n/2){
                cout<<"*";
            }
            else cout<<" ";
            
        }
        cout<<endl;
    }
}
void Patterns24(int n){
/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top =i,left = j,right =(2*n-2)-j,down =(2*n-2)-i;
            cout<<(n-min(min(top,down),min(left,right)));

        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>> t;
    for(int i=0;i<t;i++){
        
        int n;
        cin>>n; 
        Patterns24(n);
    }
    

}