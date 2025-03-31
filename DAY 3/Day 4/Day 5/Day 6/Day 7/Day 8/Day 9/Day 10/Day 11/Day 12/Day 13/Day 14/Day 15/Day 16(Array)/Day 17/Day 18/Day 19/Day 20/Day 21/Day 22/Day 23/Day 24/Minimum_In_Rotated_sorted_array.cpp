//wap in c++ to find the minimum in a rotated sorted array
# include<iostream>
using namespace std;
int min(int arr[],int n){
    int start=0,end=n-1,mid,ans=arr[0];//ans=arr[0] to handle the cases like this arr=[1,2,3,4]
    while(start<=end){
        //find mid
        mid=start+(end-start)/2;
        //arr[mid]>=arr[start];
        if(arr[mid]>=arr[start]){
            start=mid+1;
        }
        else{
            ans=arr[mid];
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    //array declare
    int arr[1000];
    int n;
    cout<<"Enter The Size OF array: ";
    //size input
    cin>>n;
    //array input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<min(arr,n);
    return 0;
}