# include<iostream>
using namespace std;
void find(vector<int>arr,int n){
    //create a new array of size n named as count
    vector<int>count(n,0);
    //traverse the array
    for(int i=0;i<n;i++){
        count[arr[i]-1]++;
    }
    //find the missing 
    for(int i=0;i<n;i++){
        if(count[i]==0){
            cout<<i+1<<" 8";
        }
    }
    //find the repeating
    for(int i=0;i<n;i++){
        if(count[i]==2){
            cout<<i+1<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"Enter The Size of Array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //function call
    find(arr,n);
    
    return 0;
}