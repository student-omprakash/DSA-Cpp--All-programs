//wap in cpp for trapping rain water(leetcode-42) 
//something optimised approach T.C=o(n) and S.C=o(n)
# include<iostream>
using namespace std;
int rain_water(vector<int>arr,int n){
    int left_max[n];
    int right_max[n];
    left_max[0]=0;
    for(int i=1;i<n;i++){
        left_max[i]=max(left_max[i-1],arr[i-1]);
    }
    right_max[n-1]=0;
    for(int i=n-2;i>=0;i--){
        right_max[i]=max(right_max[i+1],arr[i+1]);
    }
    int sum=0,ans;
    for(int j=0;j<n;j++){
       ans=min(left_max[j],right_max[j]);
      if(ans-arr[j]>0){
        sum+=ans-arr[j];
      }

    }
    return sum;

}
int main(){
    int n;
    cout<<"Enter The size of vector: ";
    cin>>n;
    vector<int>v(n);
 
    cout<<"Enter The Elements Of Vector: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //function call
    cout<<rain_water(v,n);
}
