# include<iostream>
# include<vector>
using namespace std;
int two_sum(int arr[],int n,int target){
    int start=0,end=n-1;
    //vector<int>a;
    while(start<end){
        if(arr[start+end]==target){
            return 1;
            break;
        }
        else if(arr[start]+arr[end]>target){
            end--;
        }
        else {
            start++;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    //function call
    cout<<two_sum(arr,n,target);
    return 0;
}