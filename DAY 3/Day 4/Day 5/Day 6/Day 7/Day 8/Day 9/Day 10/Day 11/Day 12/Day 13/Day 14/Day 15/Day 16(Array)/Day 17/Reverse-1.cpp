# include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter The Elements Of Array: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int j=4;j>=0;j--){
        cout<<arr[j]<<" ";
    }
    return 0;
}
