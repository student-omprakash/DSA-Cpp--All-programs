//Use Bubble Sort Algorithm to sort the array of integers in decreasing order.
# include<iostream>
using namespace std;
int main(){
    //array declare
    int arr[1000];
    int n;
    cout<<"Enter The Size Of Array: ";
    cin>>n;
    //array as input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //outer for loop
    for(int i=0;i<n-1;i++){
        //to swap the number in decreasing order
        for(int j=0;j<n-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    //output
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}