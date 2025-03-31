//Selection Sort Algorithm to sort the array of char in ascending order.
# include<iostream>
using namespace std;
int main(){
    //array declare
    char arr[1000];
    int n;
    cout<<"Enter the size of array: ";
    //size as input
    cin>>n;
    //array as input
    for(char i='a';i<'a'+n;i++){
        cin>>arr[i];
    }
    //outer for loop
    for(char i='a';i<'a'+n;i++){
        //inner for loop
        for(char j=i+1;j<'a'+n;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
    for(char i='a';i<'a'+n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}