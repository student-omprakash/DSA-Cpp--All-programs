//wap to find the largest sub_array sum
//T.C=o(n^3)->(Broot-Force Approach)

# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size Of array; ";
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum,maxi=INT_MIN;
    //first loop for starting index
    for(int i=0;i<n;i++){
        //re-initilization of sum after each iteration
        sum=0;
        //second loop for ending index
        for(int j=i;j<n;j++){
            sum+=arr[j];
            maxi=max(maxi,sum);
           //loop for to print start to end index
           for(int k=i;k<=j;k++){
            cout<<arr[k]<<" ";
           }
           cout<<endl;
        } 
    }
    cout<<maxi;

    return 0;
}