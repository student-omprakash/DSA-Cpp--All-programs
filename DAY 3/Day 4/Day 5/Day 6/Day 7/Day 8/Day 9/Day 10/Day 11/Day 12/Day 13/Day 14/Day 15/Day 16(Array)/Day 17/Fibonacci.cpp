//wap to print the 'n'th fibonacci number using array
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n;
    int arr[10000];
    arr[0]=0;//first term of fibonacci
    arr[1]=1;//second term of fibonacci
    //first and second term we already know so we have to start loop from i=2;
    for(int i=2;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<arr[n-1];
    return 0;
}