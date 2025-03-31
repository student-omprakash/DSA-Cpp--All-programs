//wap in cpp for trapping rain water(leetcode-42) 
//most optimised approach T.C=o(n) and S.C=o(1)
# include<iostream>
using namespace std;
int rain_water(vector<int>arr){
    int n=arr.size();
    int left_max=0,right_max=0,maxi=arr[0],sum=0,index=0;
    //find the maximum height building
    for(int i=1;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
            index=i;
        }
    }
    //solve left part
    for(int i=0;i<index;i++){
        if(left_max>arr[i]){
            sum+=left_max-arr[i];
        }
        else left_max=arr[i];
    }
    //solve right part
    for(int i=n-1;i>index;i--){
        if(right_max>arr[i]){
            sum+=right_max-arr[i];
        }
        else{
            right_max=arr[i];
        }
    }
    return sum; 
}
int main(){
    int n;
    cout<<"Enter The Size Of Array: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements Of Array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //function call
   cout<< rain_water(v);
    return 0;
}