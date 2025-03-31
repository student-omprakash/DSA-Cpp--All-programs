/*Take 20 elements from user input and 
find its sum with the help of an array.*/
# include<iostream>
using namespace std;
int main(){
    int arr[20],i,j,sum=0;
    cout<<"Enter The 20 Elements: ";
    for(i=0;i<20;i++){
        cin>>arr[i];
    }
    for(j=0;j<20;j++){
        sum+=arr[j];
    }
    cout<<sum<<endl;
    return 0;
}