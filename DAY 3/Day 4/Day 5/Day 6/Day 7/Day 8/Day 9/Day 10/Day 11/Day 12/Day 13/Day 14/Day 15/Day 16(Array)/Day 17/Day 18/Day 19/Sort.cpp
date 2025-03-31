//sorting of array using selection sort algorithm
# include<iostream>
using namespace std;
int main(){
    //declaration of array
    int arr[1000];
    //taking size of array from user
    int n;
    cout<<"Enter The Size of array: ";
    cin>>n;
    //taking array as input from user
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //1st for loop
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
            }
        }  
    }
    //print the sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}