#include<bits/stdc++.h>
using namespace std;


int getmax(int arr[], int size);
int getmin(int arr[],int size);

int main(){
    int size;

    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
        }
    cout <<"max number is: "<< getmax(arr,size)<<endl;
    cout <<"min number is: "<< getmin(arr,size);


}
int getmax(int arr[], int size){
    int maxi = INT_MIN;
    for(int i=0; i<size;i++){
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}
int getmin(int arr[],int size){
    int maximum=INT_MAX;
    for(int i=0;i<size;i++){
        maximum=min(maximum,arr[i]);
    }
    return maximum;
}
