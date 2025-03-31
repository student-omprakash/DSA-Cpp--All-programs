//wap in cpp to find peak element in a mountain array 
# include<iostream>
using namespace std;
int peak(int arr[] ,int n){
    int start=0,end=n-1,mid,ans;
    while(start<=end){
        //find middle
        mid=end+(start-end)/2;
        //1st condtion
        if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]){
            ans=mid;
        }
        //second condition
        else if(arr[mid]>arr[mid+1]){
            end=mid-1;
        }
        //third condition
        else{
            start=mid+1;
        }
    }
    return ans;
    
}
int main(){
    //array declare
    int arr[1000];
    int n;
    cout<<"Enter The Size Of Array: ";
    //size as input
    cin>>n;
    //array as input
    cout<<"Enter The Elements of Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //function calling
    cout<<peak(arr,n);
    return 0;
}