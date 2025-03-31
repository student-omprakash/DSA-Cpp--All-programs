# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number:";
    cin>>n;
    while(n>9){
         int sum=0,r;
    while(n>0){
        r=n%10;
        n/=10;
        sum+=r;
    }
    n=sum;
    }
    cout<<n;
    return 0;
}