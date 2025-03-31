# include<iostream>
# include<string>
using namespace std;
int main(){
    //declaring character array
    char arr[]={'a','p','p','l','e'};
    //displaying output
    cout<<arr;
    cout<<endl;


    //another method of displaying string
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    cout<<endl;

    //another method of variable length string
    char arr2[10];
    cout<<"Enter The String: ";
    cin>>arr2;
    arr2[4]='\0';
    //now if i enter the 5 or more than 5 character then 
    //it will print only first 4 character
    cout<<arr2;
    cout<<endl;

    
    string s="Apple";
    cout<<s;
    cout<<endl;

    //string as input from user
    string str;
    cout<<"Enter The New String of any length: ";
    //if here we enter the string with the space then 
    //it will print only string before the space
    //Ex:->input:ompraksh kewatiya
    //output:->omprakash
    //whenever we enter the space,tab,enter after that our cin object will
    //not read the input to resolve this we will use the getline(cin,string_name);
    cin>>str;
    cout<<str;
    cout<<endl;
    //string input with getline
    string s1;
    cout<<"Enter the string with the space: ";
    //cin.ignore() is used to clear the initial input buffer
    //without this our getline(cin,s1) will not work
    cin.ignore();
    getline(cin,s1);
    cout<<s1<<endl;
    //cout<<endl;
    return 0;
}