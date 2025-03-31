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
    for(int j=0;j<n-1;j++){
        //for swap the numbers
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    }
    //array as output
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}