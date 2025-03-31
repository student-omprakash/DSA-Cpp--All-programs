//wap to print the n natural number accept those number where n is divisible by 4
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%4==0)
        continue;
        cout<<i<<" ";
    }
    return 0;
}