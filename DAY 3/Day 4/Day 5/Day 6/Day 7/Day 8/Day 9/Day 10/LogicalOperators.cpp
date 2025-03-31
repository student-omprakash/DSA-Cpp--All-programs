/*wap to find greatest among three numbers using logical operators*/
# include<iostream>
using namespace std;
int main(){
    // int a,b,c;
    // cout<<"Enter The Numbers: ";
    // cin>>a>>b>>c;
    // //And (&&) operator
    // if(a>b&&a>c){
    //     cout<<a<<" "<<"Is Greatest Number";
    // }
    // else if(b>a&&b>c){
    //     cout<<b<<" "<<"Is Greatest Number";
    // }
    // else{
    //     cout<<c<<" "<<"Is Greatest Number";
    // }
    

    //OR(||) operator
    char c;
    cout<<"Enter The Character:";
    cin>>c;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        cout<<"Vowel";
    }
    else {
        cout<<"Consonent";
    }
    return 0;
}
