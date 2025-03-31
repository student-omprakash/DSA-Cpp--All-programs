/* Calculate the average of elements in an array of size 18.*/
# include<iostream>
using namespace std;
int main(){
    int arr[18],i,j,sum=0,ans;
    cout<<"Enter The Elements Of Array: ";
    for(i=0;i<18;i++){
        cin>>arr[i];
    }
    for(j=0;j<18;j++){
        sum+=arr[j];
        ans=sum/18;
    }
    cout<<ans<<endl;
    return 0;
}
