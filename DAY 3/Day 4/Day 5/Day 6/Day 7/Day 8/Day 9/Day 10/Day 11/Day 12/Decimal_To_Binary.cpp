//wap to convert a user given decimal to binary number
# include<iostream>
using namespace std;
int main(){
    long long int n,ans=0,remainder,mul=1;
    cout<<"Enter The Decimal Number:";
    cin>>n;
    while(n>0){
        remainder=n%2;//we acn use here bitwise operator also n&1
        n=n/2;//here also we use bitwise operator (n=n>>1) because it will also divide by one
        ans=remainder*mul+ans;
        mul=mul*10;
    }
    cout<<ans;
    return 0;
}