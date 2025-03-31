//Bubble Sort Algorithm to sort the array of char in ascending order.
# include<iostream>
using namespace std;
int main(){
    //array declare
    char arr[1000];
    int n;
    cout<<"Enter The Size Of Array: ";
    //size as input
    cin>>n;
    //array as input
    for(char i='a';i<'a'+n;i++){
        cin>>arr[i];
    }
    //outer for loop
    for(int i=0;i<n-1;i++){
        //inner for loop
    for(int i='a';i<'a'+n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    }
    //output
    for(char i='a';i<'a'+n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}