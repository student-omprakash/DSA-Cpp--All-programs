# include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter The Alphabet: ";
    cin>>c;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonent";
    }
    return 0;
}