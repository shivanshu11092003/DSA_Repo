#include<bits/stdc++.h>
using namespace std;
/*

selct the min and swap
TIME COMPLEXITY
n , n-1, n-2 ,n-3,......2+1
=n(n+1)/2
~O(n^2) //best/worst/avg

*/

void slectionSort(int arr[],int n){
    for (int i = 0; i <= n-2; i++)
    {
       int mini = i;
       for(int j=i;j<=n-1;j++){
        if(arr[j]<arr[mini]){
            mini = j;
        }
       }
    
    //swaping
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
    }
    
}

int main(){
    int n;
    cin>> n;
    int arr[n];
    for (int i = 0; i<n; i++)
    {
        cin>> arr[i];
    }
    slectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    return 0;
    
}