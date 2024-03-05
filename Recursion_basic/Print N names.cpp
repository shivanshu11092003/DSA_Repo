#include <bits/stdc++.h>
using namespace std;
void fun(int i,int n){
    if(i>n) return;
    printf("Shivanshu Gupta\n");
    fun(i+1,n);

}
int main(){
    int n;
    cin>>n;
    fun(1,n);
}
//time complexity is O(n);
//stackcapacity is O(n)