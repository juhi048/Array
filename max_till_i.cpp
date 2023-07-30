#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];
    int maxno=arr[0];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for (int i=0;i<n;i++){
        maxno=max(maxno,arr[i]);
        cout<<maxno<<endl;
    }
    return 0;
}
