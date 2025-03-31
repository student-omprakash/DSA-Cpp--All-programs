//wap to find pair with given difference for Ex:->arr=[2,3,5,10,50,80] difference=45
//output->50-5=45 so output should be ->[2,4];
//first solve it using broute force approach with T.C=o(n^2);
# include<iostream>
using namespace std;
int diff(int arr[],int n,int difference){
    int i,j;
    for(i=n-1;i>=1;i--){
        for(j=i-1;j>=0;j--){
            if(arr[i]-arr[j]==difference){
                return 1;
            }
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int difference;
    cin>>difference;
    //function call
    cout<<diff(arr,n,difference);
    return 0;
}