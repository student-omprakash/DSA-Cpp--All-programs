/*Take three numbers a,b,c from the user, print yes 
if a is either greater than b or c. Otherwise print NO.*/
# include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter The Numbers: ";
    cin>>a>>b>>c;
    if(a>b||a>c){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}