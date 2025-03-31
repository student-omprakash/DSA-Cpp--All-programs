//wap in c++ to print n to 1 numbers
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number:";
    cin>>n;
    for(int i=n;i>=1;i--){
        cout<<i<<" ";
    }
    return 0;
}