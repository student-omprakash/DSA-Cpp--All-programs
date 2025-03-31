/*Insertion Sort Algorithm to sort the array of integers in increasing order
if we start from the last element of the array.
Question was explained in the class.*/
# include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Enter The Size Of Array: ";
    //size as input
    cin>>n;
    //array as input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //outer for loop
    for(int i=n-2;i>=0;i--){
        //inner for loop
        for(int j=i+1;j<n;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}