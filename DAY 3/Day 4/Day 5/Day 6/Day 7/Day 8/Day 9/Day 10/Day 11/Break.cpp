//print the first n natural number accept one number 
# include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter The Number:\n";
    cin>>n;
    cout<<"Enter The Stoping Number";
    cin>>x;
    for(int i=1;i<=n;i++){
        if(i==x)
        break;
        cout<<i<<" ";
    }
    return 0;
}