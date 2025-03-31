//wap to implement the 4_sum in array
//T.C=o(n^3*logn) and s.c=o(1)
# include<iostream>
using namespace std;
bool four_sum(vector<int>arr,int target){
    int n=arr.size();
    for(int i=0;i<n-2;i++){
        for(int j=0;j<n-3;j++){
            for(int k=0;k<n-4;k++){
                int find=target-arr[i]-arr[j]-arr[k];
                int start=k+1,end=n-1;
                while(start<=end){
                    if(arr[start]+arr[end]==find){
                        return 1;
                    }
                    else if(arr[start]+arr[end]<find){
                        start++;
                    }
                    else {
                        end--;
                    }
                }
            }
        }
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter The Size Of vector: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the Elements in vector: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"Enter The Target element: ";
    int target;
    cin>>target;
    //function call
    cout<<four_sum(v,target);
    return 0;


}