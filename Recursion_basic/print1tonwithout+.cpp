#include<bits\stdc++.h>
using namespace std;
void fun(int i,int n){
    if(i<1) return;
    fun(i-1,n);
    printf("%d\n",i);
}
int main(){
    int n;
    cin>> n;
    fun(n,n);
}
