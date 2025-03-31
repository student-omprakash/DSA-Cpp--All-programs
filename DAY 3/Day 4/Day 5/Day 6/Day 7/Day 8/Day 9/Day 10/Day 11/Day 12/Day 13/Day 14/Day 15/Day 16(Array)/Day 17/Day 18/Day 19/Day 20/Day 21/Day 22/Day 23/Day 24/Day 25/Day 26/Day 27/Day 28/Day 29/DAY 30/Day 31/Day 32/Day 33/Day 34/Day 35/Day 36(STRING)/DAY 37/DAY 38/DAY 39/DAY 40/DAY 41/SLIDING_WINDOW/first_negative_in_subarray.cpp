# include<iostream>
using namespace std;
vector<int>first_negative(int arr[],int k,int n){
    vector<int>ans;
    //int flag=0;
    for(int i=0;i<=n-k;i++){
        int flag=0;
        for(int j=i;j<i+k;j++){
            if(arr[j]<0){
                flag=1;
                ans.push_back(arr[j]);
                break;
            }
        } 
        if(!flag){
            ans.push_back(0);
        }  
    }
    return ans;
}
int main(){
    int size;
    cout<<"Enter The Size Of array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sub_array_size;
    cout<<"Enter The sub_array_size: ";
    cin>>sub_array_size;
    //function call
    vector<int>ans1=first_negative(arr,sub_array_size,size);
    for(int i=0;i<ans1.size();i++){
        cout<<ans1[i]<<" ";
    }
    return 0;
}