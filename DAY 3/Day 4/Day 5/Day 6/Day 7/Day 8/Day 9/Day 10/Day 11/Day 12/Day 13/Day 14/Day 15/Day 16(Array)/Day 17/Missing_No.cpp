# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int i=0,a=0;
    while(i<=n){
        a+=i;
        i++;
    }
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    int ans=a-sum;
    cout<<ans;
    return 0;
}