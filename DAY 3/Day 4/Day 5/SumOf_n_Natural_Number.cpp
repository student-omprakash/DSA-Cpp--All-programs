# include<iostream>
using namespace std;
int main(){
    int n,power,sum=0;
    cout<<"Enter The Number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"Sum Of Numbers:"<<sum;

    return 0;
}