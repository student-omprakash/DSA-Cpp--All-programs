//wap to convert user given decimal number to octal number
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n;
    int remainder,ans=0,mul=1;
    while (n>0)
    {
    remainder=n%8;
    n/=8;
    ans+=remainder*mul;
    mul*=10;
    }
    cout<<ans;
    return 0; 
}