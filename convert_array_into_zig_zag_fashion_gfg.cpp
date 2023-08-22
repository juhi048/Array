class Solution {
  public:
    // Program for zig-zag conversion of array
    void swap (int arr[],int i,int j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    void zigZag(int arr[], int n) {
        // code here
        int flag =1;
        for(int i=0;i<n-1;i++){
            if(flag==1){
                if(arr[i]>arr[i+1]){
                    swap(arr,i,i+1);
                }
                flag=0;
            }
            else{
                if(arr[i]<arr[i+1]){
                    swap(arr,i,i+1);
                }
                flag=1;
            }
        }
    }
};
