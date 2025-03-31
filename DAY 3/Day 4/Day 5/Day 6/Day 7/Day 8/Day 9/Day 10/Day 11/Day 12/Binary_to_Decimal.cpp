//wap to convert binary number into decimal number
# include<iostream>
using namespace std;
int main(){
    int n,remainder,ans=0,mul=1;
    cout<<"Enter The Binary Number:";
    cin>>n;
    while(n>0)//we can write here onlu 'n' than also we will get right answer because whenever inside the while condition number is positive than it consider as true 
    {
        remainder=n%10;
        n/=10;//updation of number
        ans+=remainder*mul;
        mul*=2;
    }
    cout<<ans;
    return 0;
}