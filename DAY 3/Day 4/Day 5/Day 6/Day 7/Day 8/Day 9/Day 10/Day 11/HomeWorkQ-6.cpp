/*Give a number n, find if it is prime or not, 
use a while loop and break here to solve it.*/
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n;
    int i=2;
    if(n<2) cout<<"Not prime";
    while(i<n){
        if(n%i==0){
            cout<<"Not Prime";
            break;
        }
        i++;
    }
    if(i==n)
        cout<<"Prime";
    return 0;
}