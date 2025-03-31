/*Selection Sort Algorithm to sort the array of integers 
in increasing order by taking the highest number to last place. 
Question was explained in the class.*/
# include<iostream>
using namespace std;
int main(){
    //array declare
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
    for(int i=n-1;i>=0;i--){
        //inner for loop
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
    //output array sorted
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

