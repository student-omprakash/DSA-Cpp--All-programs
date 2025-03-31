//wap to print the first n natural numbers
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number:";
    cin>>n;
    int i=1;//initialize
    do{
        cout<<i<<"\n";
        i++;//updation
    }
    while(i<=n);//break condition
    return 0;
}