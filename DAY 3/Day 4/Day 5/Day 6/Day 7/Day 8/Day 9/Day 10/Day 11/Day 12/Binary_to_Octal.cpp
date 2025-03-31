//wap to convert binary number to octal number
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Binary Number: ";
    cin>>n;
    int ans=0,rem,mul=1,onum;
    onum=n;
    while(onum>0)
    {
        rem=onum%10;
        onum/=10;
        ans+=rem*mul;
        mul*=2;
    }
    int decimal=ans;
    int ans2=0,rem2,mul2=1;
    while(decimal>0){
        rem2=decimal%8;
        decimal/=8;
        ans2+=rem2*mul2;
        mul2*=10;
    }
    cout<<"octal form of Binary number "<<n<<" is "<<ans2;
    
    return 0;
}