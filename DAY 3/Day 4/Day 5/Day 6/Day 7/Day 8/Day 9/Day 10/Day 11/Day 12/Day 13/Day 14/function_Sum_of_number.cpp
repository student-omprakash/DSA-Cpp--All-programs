# include<iostream>
using namespace std;
int sum(int a,int b)//function declareation
{
    int ans=a+b; //function defination
    return ans;
}
void mul(int m,int n)
{
    int ans=m*n;
    cout<<ans;
}
void fun()
{
    cout<<"Coder Army";
}
int main(){
    int a,b;
    cout<<"Enter The Number: ";
    cin>>a>>b;
    //function calling
    cout<<sum(a,b);
    cout<<endl;
    mul(a,b);
    cout<<endl;
    fun();
    return 0;
}