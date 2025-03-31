# include<iostream>
using namespace std;
int Aggressive_Cows(int arr[],int n,int k){
    //sort the array
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    //find start,end
    int start=1,end=arr[n-1]-arr[0],mid,ans;
    //while loop
    while(start<=end){
    //mid find
    mid=start+(end-start)/2;
    //for loop to give distance and count the cows
    int count=1,position=arr[0];
    for(int i=0;i<n;i++){
        if(mid+position<=arr[i]){
            count++;
            position=arr[i];
        }
    }
    if(count<k){
       end=mid-1;
    }
    else {
        ans=mid;
        start=mid+1;
    }
    }
    return ans;

}
int main(){
    //array declare
    int arr[100],n,k;
    cout<<"Enter The Size Of array";
    //size as input
    cin>>n;
    //array as input
    cout<<"Enter The Elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //no. of cows as input
    cout<<"Enter The no. of cows: ";
    cin>>k;
    //function calling
    cout<<Aggressive_Cows(arr,n,k);
    return 0;
}