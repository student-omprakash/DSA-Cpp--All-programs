//wap in cpp for trapping rain water(leetcode-42) 
//broute-force approach T.C=o(n^2) and S.C=o(1)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Size Of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter The elements Of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        int l_max=0;
        for(int j=0;j<i;j++){
            l_max=max(l_max,arr[j]);
        }
        int r_max=0;
        for(int j=i+1;j<n;j++){
            r_max=max(r_max,arr[j]);
        }
        int mini=min(l_max,r_max);
        int ans=mini-arr[i];
        if(ans>0){
            sum+=ans;
        }
    }
    cout<<sum;


    return 0;
}

