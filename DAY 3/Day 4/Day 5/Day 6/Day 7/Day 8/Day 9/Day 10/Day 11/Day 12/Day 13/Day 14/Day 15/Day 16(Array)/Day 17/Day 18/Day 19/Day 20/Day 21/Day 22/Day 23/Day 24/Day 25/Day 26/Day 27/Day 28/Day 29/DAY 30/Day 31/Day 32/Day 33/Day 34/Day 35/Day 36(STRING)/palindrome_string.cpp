// wap to check a string is a palindrome or not
// Ex:->naman is a palindrome
# include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter The String: ";
    getline(cin,str);
    int start=0,end=str.size()-1;
    while(start!=end){
        if(str[start]!=str[end]){
            cout<<"Not a palindrome: ";
            return 1;
        }
        else{
            start++;
            end--;
        }
    }
    cout<<"string is a palindrome: ";

    return 0;
}

