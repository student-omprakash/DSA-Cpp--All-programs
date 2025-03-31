# include<iostream>
using namespace std;
int max_sub_array_sum(int arr[],int k,int size){
    int start=0,sum=0,maxi=-1;
    for(int end=0;end<size;end++){
        sum+=arr[end];
        if(end-start+1==k){//when window size hits
            maxi=max(maxi,sum);
            sum-=arr[start]; 
            start++;
        }
    }
    return maxi;
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
    cout<<max_sub_array_sum(arr,sub_array_size,size);

}