# include<iostream>
using namespace std;
int two_sum(int arr[],int n,int target){
    int i;
    for(i=0;i<n-1;i++){
        int x=target-arr[i];
        int start=i+1;
        int end=n-1,mid,ans;
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]==x){
                return arr[mid]+arr[i];
                break;
            }
            else if(arr[mid]>x){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    //function call
    cout<<two_sum(arr,n,target);
    return 0;
}