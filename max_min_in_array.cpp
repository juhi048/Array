#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxNo=arr[0];
    int minNo=arr[0];

    for(int i=0;i<n;i++){
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
    }
    cout<<"The maximum no. in the array is "<<maxNo<<endl;
    cout<<"The minimum no. in the array is "<<minNo<<endl;

 
return 0;
}
