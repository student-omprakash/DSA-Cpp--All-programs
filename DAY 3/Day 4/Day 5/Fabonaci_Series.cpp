# include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,i,sum;
    cout<<"Enter The Number:";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
        cout<<sum<<" ";
    }
    return 0;
}