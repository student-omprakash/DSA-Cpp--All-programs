# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size Of Array: ";
    cin>>n;
    //array declaretion
    int arr[n];
    //array elements as input
    cout<<"Enter The Elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //vector declare for suffix
    vector<int>suffix(n);
    for(int i=n-2;i>=0;i--){
        suffix[n-1]=arr[n-1];
        suffix[i]=suffix[i+1]+arr[i];
    }
    //suffix array as output
    for(int i=0;i<n;i++){
        cout<<suffix[i]<<" ";
    }

    return 0;
}