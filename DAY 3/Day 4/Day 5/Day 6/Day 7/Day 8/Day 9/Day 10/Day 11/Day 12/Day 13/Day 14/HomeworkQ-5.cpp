/*Print “Hello Coder Army” n times using Function.*/
# include<iostream>
using namespace std;
void function(int n){
    for(int i=1;i<=n;i++){
        cout<<"Hello Coder Army\n";

    }
    
}
int main(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n;
    function(n);
    return 0;
}