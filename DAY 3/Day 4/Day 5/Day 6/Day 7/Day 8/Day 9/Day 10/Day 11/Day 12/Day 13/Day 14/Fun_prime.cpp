# include<iostream>
using namespace std;
bool prime(int a){
    int i;
    if(a<2) return 0;
    for(i=2;i<a;i++){
        if(a%i==0) return 0;
    }
    return 1;
}
int main(){
    int a;
    cout<<"Enter The Number: ";
    cin>>a;
    cout<<prime(a);
}