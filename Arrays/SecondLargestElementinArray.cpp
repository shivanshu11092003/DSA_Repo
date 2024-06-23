#include<bits/stdc++.h>
using namespace std;
int secondLargestnumber(vector<int> &a,int n){
    int largest = a[0];
    int slargest = -1;
    for(int i =1;i<n;i++){
        if(a[i]>=largest){
            slargest=largest;
            largest=a[i];
        }
        else{
            if(a[i]<largest && a[i]>slargest){
                slargest = a[i];
            }
        }

    }

    return slargest;

}
int main(){
    vector<int> a = {2,7,3,7,8,2,4};
    int n = a.size();

    int secondLargest = secondLargestnumber(a,n);
    cout << secondLargest << " ";
}