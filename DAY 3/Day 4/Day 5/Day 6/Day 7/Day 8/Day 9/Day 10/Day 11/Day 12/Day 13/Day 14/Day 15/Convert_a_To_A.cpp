//wap to convert small letter into capital letter ex:-'a'->'A'v
# include<iostream>
using namespace std;
char convert(char c){
    char ans=c-'a'+'A';
    return ans;
}
int main(){
    char c;
    cout<<"Enter The Character:";
    cin>>c;
    convert(c);
    cout<<convert(c);
    return 0;
}