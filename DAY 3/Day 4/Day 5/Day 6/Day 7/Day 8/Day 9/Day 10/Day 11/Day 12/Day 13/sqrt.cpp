# include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<=0) cout<<"false";
    while(n>1){
        if(n%2==0) n/=2;
        else if(n%3==0) n/=3;
        else if(n%5==0) n/=5;
        else cout<<"false";
        break;
    }
    if(n==1) cout<<"true";
    else cout<<"false";
    return 0;
}