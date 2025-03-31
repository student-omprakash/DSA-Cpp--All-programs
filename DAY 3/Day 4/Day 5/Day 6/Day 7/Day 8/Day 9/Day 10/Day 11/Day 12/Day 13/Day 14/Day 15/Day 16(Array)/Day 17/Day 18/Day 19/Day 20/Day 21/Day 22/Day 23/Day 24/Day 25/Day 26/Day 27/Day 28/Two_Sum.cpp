//wap to calculate two sum using brootforce approach
# include<iostream>
using namespace std;
int two_sum(int arr[],int n,int target){
    int i,j;
    for( i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                return i+j;
            }
        }
    }
    return -1;
}
int main(){
   // vector<int>v[2];
    int n;
    cout<<"Enter The Size of array:";
    cin>>n;
    int arr[n];
    //array as input
    cout<<"Enter The elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //target as input
    int target;
    cout<<"Enter The Target Element: ";
    cin>>target;
    //function call
    cout<<two_sum(arr,n,target);
    return 0;
}