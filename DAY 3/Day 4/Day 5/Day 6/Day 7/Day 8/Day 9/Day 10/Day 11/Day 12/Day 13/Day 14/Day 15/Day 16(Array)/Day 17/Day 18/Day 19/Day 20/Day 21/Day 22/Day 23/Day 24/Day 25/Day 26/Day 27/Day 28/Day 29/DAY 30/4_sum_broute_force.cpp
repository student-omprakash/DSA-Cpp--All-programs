//wap to implement the 4_sum in array
//T.C=o(n^4) and s.c=o(1)
# include<iostream>
using namespace std;
bool four_sum(vector<int>arr,int target){
    int n=arr.size();
    for(int i=0;i<n-3;i++){
        for(int j=0;j<n-2;j++){
            for(int k=0;k<n-1;k++){
                for(int l=0;l<n;l++){
                    if(arr[i]+arr[j]+arr[k]+arr[l]==target){
                        return 1;
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