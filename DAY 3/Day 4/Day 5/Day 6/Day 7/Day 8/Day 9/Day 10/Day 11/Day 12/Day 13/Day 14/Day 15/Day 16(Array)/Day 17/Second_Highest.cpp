//wap to find second highest element in an array
# include<iostream>
using namespace std;
int main(){
    int i,j,ans=INT_MIN,seh=INT_MIN;
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    //finding first highest
    for(j=0;j<5;j++)
    {
        if(arr[j]>ans)
        ans=arr[j];
    }
   // second highest
    for(j=0;j<5;j++){
        if(arr[j]==ans)
        continue;
        if(arr[j]>seh){
            seh=arr[j];
        }
    }
    cout<<seh;
    return 0;
}