//defination of array
# include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};  // array declare
    int a[]={1,22,33,44,56,65}; //it will take size according to that
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    int array[10]={1,2,3,4,5};//remaining element it will print '0'
    for(int j=0;j<10;j++)
    cout<<array[j]<<" ";

    return 0;
}