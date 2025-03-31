//wap to find the missing and repeating in a array(GFG)
//T.C=o(n^2)->for both find_missing and find_repeating
//Auxilary space =o(1)->for both the find_missing and find_repeating

# include<iostream>
using namespace std;
int find_missing(vector<int>arr,int n){
    int ans;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                ans= arr[i];
                break;
            }
        }
    }
    return ans;
}
int find_repeating(vector<int>arr,int n){
    int ans=-1;
    for(int i=1;i<=n;i++){
        bool found=false;
        for(int j=0;j<n;j++){
            if(j==arr[i]){
                found=true;
                break;
            }
        }
        if(!found){
            ans=i; 
    }
    }
    return ans;
    
}
int main(){
    int n;
    cout<<"Enter The Size of Array: ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<find_missing(arr,n)<<" ";
    cout<<find_repeating(arr,n);
    return 0;
} 