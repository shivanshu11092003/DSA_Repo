#include<bits/stdc++.h>
using namespace std;

/*

push the max to the ladst by adjacent swaps
TIME COMPLEXITY
n , n-1, n-2 ,n-3,......2+1
=n(n+1)/2
~O(n^2) //worst/avg
___________________________________
didswap == 0 break;
~ O(n)  //Best

*/
void Bubble_Sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        int didswap = 0;
        for(int j=0;j<=i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j+1];
            arr[j+1]= arr[j];
            arr[j]=temp;
            didswap = 1;
        }
        }
        if (didswap == 0) break;
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
    Bubble_Sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    return 0;
    
}