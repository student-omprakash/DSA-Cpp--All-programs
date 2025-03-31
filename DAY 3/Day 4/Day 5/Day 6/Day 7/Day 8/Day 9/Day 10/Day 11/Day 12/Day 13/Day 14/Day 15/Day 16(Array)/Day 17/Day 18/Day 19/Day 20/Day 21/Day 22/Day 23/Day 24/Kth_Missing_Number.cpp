# include<iostream>
using namespace std;
int find(int arr[],int k,int n){
    int start=0,end=n-1,mid,ans;
    while(start<=end){
        //find mid
        mid=start+(end-start)/2;
        //arr[x]<k
        if(arr[mid]-mid-1<k){
            start=mid+1;
        }
        //arr[x]>k
        else{
            ans=mid;
            end=mid-1;
        }
    }
    return ans+k;
}
int main(){
    //array declared
    int arr[1000];
    int n,k;
    cout<<"Enter The Size Of Array: ";
    //size as input
    cin>>n;
    //array as input
    cout<<"Enter The Elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //number as input
    cout<<"Enter The Value Of K:";
    cin>>k;
    //function calling
    cout<<find(arr,k,n);
    return 0;
}