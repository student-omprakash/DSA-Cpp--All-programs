//we will lwarn about sliding window in detail
//->where we can apply sliding window
//->without sliding window brute-force approach
//->time complexitey of sliding window
//types of sliding window
//q-1->given an array find the maximum sub_array sum of size 'k';
//Ex:->arr=[2,3,5,29,7,1] sub_array_size->k=3
//T.C=o(n^2),s.c=o(1);
# include<iostream>
using namespace std;
int max_sub_array_sum(int arr[],int k,int size){
    int sum;
    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
        sum=0;
        for(int j=i;j<i+k;j++){
            sum+=arr[j];
            maxi=max(sum,maxi);
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

        return 0;
    }

