//wap to sort the array in ascending array
# include<iostream>
using namespace std;
int main(){
    //array declare
    int arr[1000];
    //take size of array from user
    int n;
    cout<<"Enter The Size Of Array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //outer for loop
    for(int i=0;i<n-1;i++){
        int index=i;
        //inner for lop
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index])
            index=j;
        }
        //swaping of 2nd and 1 st
        swap(arr[i],arr[index]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}