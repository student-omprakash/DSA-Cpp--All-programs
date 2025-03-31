//wap to reverse the string in cpp
//Ex:->input: apple,output:->elppa
# include<iostream>
# include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter The String: ";
    getline(cin,str);
    int start=0;
    int end=str.size()-1;
    while(start<end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
    cout<<str;


    return 0; 
}