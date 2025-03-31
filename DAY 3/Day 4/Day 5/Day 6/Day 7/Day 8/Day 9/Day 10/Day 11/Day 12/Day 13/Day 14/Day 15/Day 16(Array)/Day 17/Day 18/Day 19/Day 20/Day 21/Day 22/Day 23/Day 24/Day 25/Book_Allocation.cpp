//allocate minimum pages(GFG)
# include<iostream>
using namespace std;
int BookAllocation(int arr[],int n,int k){
    if(k>n) return -1;
    //finding start,end;
    int start=INT_MIN,end=0;
    for(int i=0;i<n;i++){
        start=max(arr[i],start);
        end+=arr[i];
    }
    int mid,ans;
    //int page=0,count=1;
    while(start<=end){
    //find mid
    mid=start+(end-start)/2;
    int page=0,count=1;
    for(int i=0;i<n;i++){
        page+=arr[i];
        //than i will destribute pages in next student
        if(page>mid){
            count++;
            page=arr[i];
        }
    }
    if(count>k){
        start=mid+1;
    }
    else{
        ans=mid;
     end=mid-1;

    }
    }
    return ans;
}
int main(){
    //array declare
    int arr[1000];
    //size input
    int n,k;
    cout<<"Enter The No. of books or size of array: ";
    cin>>n;
    //student as input
    cout<<"Enter The No. of students to allocate the Books: ";
    cin>>k;
    //array as input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //function calling
    cout<<BookAllocation(arr,n,k);
    return 0;
}