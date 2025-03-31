//swaping of two numbers
# include<iostream>
using namespace std;
void Swap(int &a,int &b)//pass by refrence
{
    int c;
    c=a;
    a=b;
    b=c;
}
void Swap(float &a,float &b)//function overloading (when two functions has same name but different arguments than it is called as function overloading)
{
    float d;
    d=a;
    a=b;
    b=d;

}
int main(){
    int a,b;
    cout<<"Enter The Number: ";
    cin>>a>>b;
    Swap(a,b);
    cout<<a<<" "<<b<<endl;
    float f1=3.4,f2=8.5;
    Swap(f1,f2);   //swap(a,b) it is also in-built c++ function
    cout<<f1<<" "<<f2;
    return 0;
}