//wap to caluclate three sum in array
//T.C=o(n^2) and  S.C=o(1)
# include<iostream>
using namespace std;
bool three_sum(vector<int>arr,int target){
    sort(arr.begin(),arr.end());
    int n=arr.size();
    for(int i=0;i<n;i++){
        int start=i+1,end=n-1;
        while(start<end){
            if(arr[i]+arr[start]+arr[end]==target){
                start++;
                end--;
                return 1;
            }
            else if(arr[i]+arr[start]+arr[end]<target){
                start++;
            }
            else{
                end--;
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