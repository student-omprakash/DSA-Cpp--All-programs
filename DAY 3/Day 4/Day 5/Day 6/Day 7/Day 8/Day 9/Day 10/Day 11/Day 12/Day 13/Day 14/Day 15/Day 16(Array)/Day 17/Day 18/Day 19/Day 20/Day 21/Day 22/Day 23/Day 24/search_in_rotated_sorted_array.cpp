//wap to search a element in rotated sorted array using T.C=o(log(n))
# include<iostream>
using namespace std;
int search(int arr[],int n,int target){
    int start=0,end=n-1,mid,ans=-1;
    while(start<=end){
        //find mid;
        mid=start+(end-start)/2;
        //arr[mid]==target
        if(arr[mid]==target){
            ans=mid;
            break;
        }
        //left side sorted
        else if(arr[mid]>=arr[0]){
            if(target>=arr[start]&&target<arr[mid]){
                end=mid-1;
            }
            else start=mid+1;
        }
        //right side sorted
        else{
            if(arr[end]>=target&&arr[mid]<target){
                start=mid+1;
            }
            else end=mid-1;
        }
    }
    //returning answer
    return ans;
}
int main(){
    //array declare
    int arr[1000];
    int n,target;
    cout<<"Enter The Size Of Array: ";
    //size as input
    cin>>n;
    //array as input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter The element That you want search: ";
    cin>>target;
    //function calling
    cout<<search(arr,n,target);
    return 0;
}