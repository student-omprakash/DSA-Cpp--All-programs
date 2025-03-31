# include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i*=2){
        if(n%i==0){
        cout<<"yes";
        break;
        }
        else cout<<"No";
        break;
    }
    return 0;
}