# include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter The Size Of Array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter The Elements of Array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}