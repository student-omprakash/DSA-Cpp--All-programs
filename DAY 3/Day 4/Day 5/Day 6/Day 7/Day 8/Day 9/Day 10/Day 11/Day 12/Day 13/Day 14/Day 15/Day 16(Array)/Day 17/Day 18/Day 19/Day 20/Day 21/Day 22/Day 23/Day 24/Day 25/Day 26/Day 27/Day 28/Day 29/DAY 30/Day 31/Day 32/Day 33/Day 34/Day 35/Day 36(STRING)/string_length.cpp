//wap to find the length of a string without using string.size()
# include<iostream>
# include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int start=0;
    while(str[start]!='\0'){
        start++;
    }
    cout<<start;
    return 0;
}
    
