//wap to reverse the array
# include<iostream>
using namespace std;
int main(){
    int arr[7];
    int i=0,j=6;
    cout<<"Enter The Elements Of Array: ";
    //taking array as input
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    //finding reverse array
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
   // printing the array as output
   cout<<"Reverse Array: ";

    for(i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}