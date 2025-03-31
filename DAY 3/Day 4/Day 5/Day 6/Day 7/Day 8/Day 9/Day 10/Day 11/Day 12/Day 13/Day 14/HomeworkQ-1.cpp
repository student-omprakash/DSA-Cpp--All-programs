/*Find the cube of a number using Function.*/
# include<iostream>
using namespace std;
int cube(int a){
    int ans=a*a*a;
    return ans;
}
int main(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n;
    cout<<cube(n);
    return 0;
}