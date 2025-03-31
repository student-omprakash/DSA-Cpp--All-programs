//wap to caluclate three sum in array
//T.C=o(n^3) and  S.C=o(1)
# include<iostream>
using namespace std;
int three_sum(int arr[],int n,int target){
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=i+2;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    return 1;
                }
            }
        }
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter The Size Of Array: ";
    cin>>n;
    int arr[10000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //function call
    int target;
    cout<<"Enter The Target Element: ";
    cin>>target;
    cout<<three_sum(arr,n,target);
    return 0;
}