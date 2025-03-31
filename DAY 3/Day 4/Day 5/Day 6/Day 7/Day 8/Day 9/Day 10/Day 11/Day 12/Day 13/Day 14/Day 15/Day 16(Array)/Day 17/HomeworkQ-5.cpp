/*Find the second largest element in an array
of unique elements of size n. Where n>3.*/
# include<iostream>
using namespace std;
int main(){
    int arr[10],ans;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int j=0;j<10;j++){
        for(int k=1;k<10;k++){
            if(arr[j]<arr[k])
            ans=arr[j];
        }
    }
    cout<<ans;
    
    return 0;
}