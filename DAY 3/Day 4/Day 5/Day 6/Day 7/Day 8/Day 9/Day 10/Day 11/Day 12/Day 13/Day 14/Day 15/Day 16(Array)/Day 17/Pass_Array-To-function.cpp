//wap to print the array using function
# include<iostream>
using namespace std;
void fun(int arr[],int n)//passing array to function
{   
    cout<<sizeof(arr)<<endl;//it will print '8' because arr[] is a pointer and it stores the address and mu macbook having 8gb ram 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={1,3,6,3,4};
    cout<<sizeof(arr)<<endl;;
    fun(arr,5);//calling function
    return 0;
}