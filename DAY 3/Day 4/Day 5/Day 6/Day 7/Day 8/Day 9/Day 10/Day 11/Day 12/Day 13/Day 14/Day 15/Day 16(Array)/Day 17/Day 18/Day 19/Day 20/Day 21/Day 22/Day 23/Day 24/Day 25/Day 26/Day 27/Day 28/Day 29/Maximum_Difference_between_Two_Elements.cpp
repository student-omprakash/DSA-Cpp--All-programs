//Maximum Difference between Two Elements such that Larger 
//Element Appears after the Smaller Element
//broute-force Approach T.C=o(n^2);
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter The Elements Of Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
      maxi=max(maxi,arr[j]-arr[i]);
        }
    }
    cout<<maxi;

    return 0;
}




