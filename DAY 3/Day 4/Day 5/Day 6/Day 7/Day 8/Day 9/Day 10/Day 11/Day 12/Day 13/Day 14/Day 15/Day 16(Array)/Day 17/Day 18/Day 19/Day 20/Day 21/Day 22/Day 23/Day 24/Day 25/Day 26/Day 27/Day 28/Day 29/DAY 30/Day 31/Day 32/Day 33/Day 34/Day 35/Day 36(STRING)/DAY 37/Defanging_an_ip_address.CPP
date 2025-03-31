//wap to Dafanging a ip address->leetcode-1108
//T.C=o(s.size()),s.c=o(s.size())->because we create a new string of size s
//Defanging means in string if we find '.' replace it by "[.]"
//Ex:->s=1.1.1.1->output:->1[.]1[.]1[.]1
# include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter A string: ";
    getline(cin,s);
    
    int index=0;
    string ans;
    while(index<s.size()){
        if(s[index]=='.'){
       ans+="[.]";
        }
        else{
            ans+=s[index];
        }
        index++;
    }
    cout<<ans;
    return 0;
}