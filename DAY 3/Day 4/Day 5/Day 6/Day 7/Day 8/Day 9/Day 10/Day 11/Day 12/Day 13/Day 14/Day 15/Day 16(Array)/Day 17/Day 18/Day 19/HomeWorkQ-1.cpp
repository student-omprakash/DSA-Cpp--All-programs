//Selection Sort Algorithm to sort the array of integers in decreasing order.
# include<iostream>
using namespace std;
int main(){
    //array declare
    int arr[1000];
    //taking size of array from user
    int n;
    cout<<"Enter The Size of Array: ";
    cin>>n;
    //taking array as input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i])
            swap(arr[j],arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}

