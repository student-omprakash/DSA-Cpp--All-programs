//wap to find minimum element in array
# include<iostream>
using namespace std;
int main(){
    int min=INT_MAX,n;
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        if(arr[i]<min)
        min=arr[i];
    }
    cout<<min;
    return 0;
}