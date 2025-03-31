//wap to caluclate three sum in array
//T.C=o(n^3) and  S.C=o(1)
# include<iostream>
using namespace std;
bool three_sum(vector<int>arr,int target){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    //first loop for first pointer
    for(int i=0;i<n-2;i++){
        //second loop for second pointer
        for(int j=i+1;j<n-1;j++){
            //now apply binary search to find the third element
            int find=target-arr[i]-arr[j];
            int start=j+1,end=n-1,mid;
            while(start<=end){
                mid=start+(end-start)/2;
                if(find==arr[mid]){
                    return 1;
                }
                else if(arr[mid]<find){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }

        }
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter The Size Of Vector: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements In Vector: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //target as input from user
    int target;
    cout<<"Enter The Target: ";
    cin>>target;
    //function call
    cout<<three_sum(v,target);
    return 0;
}