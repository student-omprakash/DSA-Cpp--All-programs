/* Swap 2 numbers a, b without using extra variables. 
Range of -10000<=a,b<=100000.
*/
# include<iostream>
using namespace std;
void Swap(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}
int main(){
    int a,b;
    cout<<"Enter the values of a,b: ";
    cin>>a>>b;
    if(a<=-10000||b>=100000){
        cout<<"Out of Range";
        return 2;
    }
    Swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}