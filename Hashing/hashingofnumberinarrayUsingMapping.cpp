#include<bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];

    }
//map/unordered map in c++ and hashmap in java .... map stored value in shorted manner 
    map<int, int> mpp;
    for(int i = 0 ; i<n;i++){
        mpp[arr[i]]++;

    }
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout<< mpp[number] << endl;
    }
    return 0;
}
