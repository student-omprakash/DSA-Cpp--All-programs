/*Bubble Sort Algorithm to sort the array of integers in increasing order
by taking the smallest number to first place by starting from the last.
Question was explained in the class.
*/
# include<iostream>
using namespace std; 
int main(){
    int arr[1000];
    int n;
    cout<<"Enter The Size OF Array: ";
    //size as input
    cin>>n;
    //array as input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //outer for loop
    for(int j=0;j<n-1;j++){
    //innner for loop
    for(int i=n-2;i>=0;i--){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    }
    //output
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}