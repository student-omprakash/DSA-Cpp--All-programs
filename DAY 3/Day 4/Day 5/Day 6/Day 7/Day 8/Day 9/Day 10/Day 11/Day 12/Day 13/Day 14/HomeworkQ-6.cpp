/*Given two numbers n, r. Find nCr (Combination). Use Function here.*/
# include<iostream>
using namespace std;
int fact(int n){
    int p=1;
    for(int i=1;i<=n;i++){
        p*=i;
    }
    return p;
}
int main(){
    int n,r;
    cout<<"Enter The n,and r: ";
    cin>>n>>r;
    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);
    int ans=(a)/(b*c);
    cout<<ans;

    return 0;
}