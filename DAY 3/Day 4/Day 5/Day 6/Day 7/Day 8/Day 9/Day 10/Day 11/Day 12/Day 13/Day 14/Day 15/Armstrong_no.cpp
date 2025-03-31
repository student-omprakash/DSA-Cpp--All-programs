//wap to check a number is armstrong or not using function
#include<iostream>
using namespace std;
bool armstrong(int n){
    int count=0,r,sum=0,p=1,onum,o;
    onum=n;
    o=n;
    while(onum>0){
        onum/=10;
        count++;
    }
    while(n!=0){
        r=n%10;
        n/=10;
        p=1;
        for(int i=1;i<=count;i++){
            p*=r;
        }
        sum+=p;
    }
    if(o==sum) return true;
    else return false;
}
int main(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n; 
   if(armstrong(n)) cout<<"Armstrong";
   else cout<<"Not Armstrong";
    return 0;
}