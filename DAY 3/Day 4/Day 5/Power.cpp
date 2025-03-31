//wap to print the power of number user given power
# include<iostream>
using namespace std;
int main(){
    int n,power,sum=1;
    cout<<"Enter The Number: ";
    cin>>n;
    cout<<"Enter The Power: ";
    cin>>power;
    for(int i=1;i<=power;i++){
        sum=sum*n;
    }
    cout<<n <<" to the power "<< power<< "=" <<sum<<endl;
    return 0;
}
