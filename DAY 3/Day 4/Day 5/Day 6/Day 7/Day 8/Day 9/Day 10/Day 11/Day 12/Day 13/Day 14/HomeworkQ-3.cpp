/*There are three numbers a,b,c. Put the value of a into b, 
put value of b into c and put value of c into a. Do it using Function.*/
# include<iostream>
using namespace std;
void reverse(int &a,int &b,int &c){
    int d;
    d=b;
    b=a;
    a=c;
    c=d;
}
int main(){
    int a,b,c;
    cout<<"Enter The values of a,b, and c:";
    cin>>a>>b>>c;
    cout<<"Before swaping:"<<"a="<<a<<","<<" b="<<b<<", "<<"c="<<c<<endl;
    reverse(a,b,c);
    cout<<"After swaping:"<<"a="<<a<<","<<" b="<<b<<", "<<"c="<<c<<endl;
    
    return 0;
}

