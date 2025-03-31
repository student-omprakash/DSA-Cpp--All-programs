# include<iostream>
using namespace std;
int fact(int a){
    int product=1,i;
    for(i=1;i<=a;i++){
        product=product*i;
    }
    return product;
}
int main(){
    int a;
    cout<<"Enter The Number: ";
    cin>>a;
    cout<<fact(a);
    return 0;
}