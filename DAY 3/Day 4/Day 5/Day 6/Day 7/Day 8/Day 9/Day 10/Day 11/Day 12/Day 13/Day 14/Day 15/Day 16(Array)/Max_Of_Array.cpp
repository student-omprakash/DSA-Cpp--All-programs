# include<iostream>
using namespace std;
int main(){
    int i,j,max=INT_MIN;
    int arr[5];
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int j=0;j<5;j++){
        if(arr[j]>max)
        max=arr[j];
    }
    cout<<max;
    return 0;
}