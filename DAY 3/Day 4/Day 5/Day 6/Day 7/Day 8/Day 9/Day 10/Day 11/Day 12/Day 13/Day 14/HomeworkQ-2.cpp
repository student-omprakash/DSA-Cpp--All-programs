/*Reverse a number n using Function, Constraints: -5000<=n<=5000*/
# include<iostream>
using namespace std;
int Reverse(int a){
    int sum=0,rem;
    while(a>0){
        rem=a%10;
        a/=10;
        sum=sum*10+rem;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n;
    if(n>5000||n<-5000){
        cout<<"Number out of range";
        return 5;
    }
    cout<<Reverse(n);
    return 0;
}