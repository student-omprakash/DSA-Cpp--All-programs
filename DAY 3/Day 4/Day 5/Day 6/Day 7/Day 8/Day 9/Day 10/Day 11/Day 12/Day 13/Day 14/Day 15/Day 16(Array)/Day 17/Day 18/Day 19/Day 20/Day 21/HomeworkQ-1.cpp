//Use Insertion Sort Algorithm to sort the array of integers in decreasing order.
# include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Enter The Size Of Array: ";
    //input size of array
    cin>>n;
    ///array as input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //outerfor loop
    for(int i=1;i<n;i++){
        //inner for loop
        for(int j=i;j>0;j--){
            //swaping condition
            if(arr[j]>arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
    //array as output
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}