# include<iostream>
# include<string>
using namespace std;
int main(){
    string s1,s2,s3,s4;
    //i want to print the "om is a "good" boy" like this
    s1="om is a \"good\" boy";
    s2="\\";
    s3="\0";//when we print this in screen it will show nothing 
    //because null means the blank


    //if we want to print the null character
    //we will print like this
    s4="\\0";

    cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4;
    return 0;
}