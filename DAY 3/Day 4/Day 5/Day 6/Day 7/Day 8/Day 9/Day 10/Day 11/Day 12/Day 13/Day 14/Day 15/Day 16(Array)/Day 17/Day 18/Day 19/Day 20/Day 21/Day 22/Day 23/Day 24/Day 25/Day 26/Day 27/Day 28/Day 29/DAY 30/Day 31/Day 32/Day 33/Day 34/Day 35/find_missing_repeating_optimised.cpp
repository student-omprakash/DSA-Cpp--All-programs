# include<iostream>
using namespace std;
void find_missing(vector<int>arr){
    int n=arr.size();
    //create a new array count of size of n and all elements are =0;
    vector<int>count(n,0);
    for(int i=0;i<n;i++){
        count[arr[i]-1]++;
    }
    //find_misiing 
    int ans,ans1;
    for(int i=0;i<n;i++){
        if(count[i]==0){
            ans=i+1;
        }
    }
    //find_repeating
    for(int i=0;i<n;i++){
        if(count[i]==2){
            ans1=i+1;
        }
    }
    cout<<ans<<" "<<ans1;
}
int main(){
    int n;
    cout<<"Enter The Size of Array: ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //function call
    find_missing(arr);
    return 0;
} 