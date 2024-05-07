#include<iostream>
using namespace std;
/*
take an element and place it in current order

TIME COMPLEXITY
n , n-1, n-2 ,n-3,......2+1
=n(n+1)/2
~O(n^2) //worst/avg

~ O(n)  //Best =b/s no swap occur


*/
void InsertionSort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        
        int j=i;
        while (j>0 && arr[j-1]>arr[j])
        {
            int temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;

            j--;
            
        }
        
        
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
    InsertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    return 0;
    
}