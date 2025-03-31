# include<iostream>
using namespace std;
int painter_partition(int arr[],int n,int k)
{
    //find start,end;
    int start=0,end=0;
    for(int i=0;i<n;i++){
        start=max(arr[i],start);
        end+=arr[i];
    }
    int mid,ans;
    //while loop
    while(start<=end)
    {
        //mid find
        mid=start+(end-start)/2;
    //wall_length=0,count_painter=1
    int wall_length=0,count_painter=1;
    for(int i=0;i<n;i++)
    {
      wall_length+=arr[i];
      if(wall_length>mid)
      {
        count_painter++;
        wall_length=arr[i];
      }
    }
    if(count_painter<=k){
        ans=mid;
        end=mid-1;
    }
    else start=mid+1;
    }
    return ans;
}
int main(){
    //array declare
    int arr[100],n,k;
    //size as input
    cout<<"Enter The Size Of Array: ";
    cin>>n;
    //array as input
    cout<<"Enter The Elements Of Array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //number of pinter as input
    cout<<"Enter The No. of painters: ";
    cin>>k;
    //function call
    cout<<painter_partition(arr,n,k);

    return 0;
}