//wap to print the sum of square of first n natural numbers
# include<iostream>
using namespace std;
int main(){
    int n,sum=0,i;
    cout<<"Enter The Number: ";
    cin>>n;
    for(i=1;i<=n;i++){
        sum+=i*i;
    }
    cout<<sum;
    return 0;
}