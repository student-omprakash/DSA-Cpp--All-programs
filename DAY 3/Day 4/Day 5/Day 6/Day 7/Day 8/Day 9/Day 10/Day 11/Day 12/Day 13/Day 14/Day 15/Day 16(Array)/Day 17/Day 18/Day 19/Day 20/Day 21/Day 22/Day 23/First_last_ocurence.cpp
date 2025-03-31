# include<iostream>
using namespace std;
vector<int>First_Last(vector<int>arr,int n,int target){
    int start=0,end=n-1,mid,first=-1;
    int ans1;
    while(start<=end){
        //find mid
        int mid=start+(end-start)/2;
        //arr[mid]==target
        if(arr[mid]==target){
            first=mid;
            end=mid-1;
            //ans1=first;
        }
        //arr[mid]<target
        else if(arr[mid]<target){
            start=mid+1;
        }
        //arr[mid]>target
        else end=mid-1;
    }
    //return ans1;
    int start1=0,end1=n-1,mid1,last=-1;
    int ans2;
    while(start1<=end1){
        //find mid
        int mid1=start1+(end1-start1)/2;
        //arr[mid]==target
        if(arr[mid1]==target){
            last=mid1;
            start1=mid1+1;
            //ans2=last;
            
        }
        //arr[mid]<target
        else if(arr[mid1]<target){
            start1=mid1+1;
        }
        //arr[mid]>target
        else end1=mid1-1;
    }
    vector<int>a(2);
    a[0]=first;
    a[1]=last;
    return a;

}
int main(){
    vector<int>arr[1000];
    int n,target;
    cout<<"Enter The Size Of Array: ";
    //size as input
    cin>>n;
    //array as input
    for(int i=0;i<n;i++){
        cin>>vector arr[i];
    }
    //ocurrance element as input
    cout<<"Enter The Element that you want to search: ";
    cin>>target;
    First_Last(arr,n,target);

    return 0;
}