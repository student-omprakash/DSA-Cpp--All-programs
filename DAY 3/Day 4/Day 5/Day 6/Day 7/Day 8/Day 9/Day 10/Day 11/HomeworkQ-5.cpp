/*Print all the Capital and small letters using a while loop.
It means A-Z, then a-z.*/
# include<iostream>
using namespace std;
int main(){
    char c='A',d='a';
    while(c<='Z'){
        cout<<c<<"  ";
        c++;
    }
    cout<<endl;
    while(d<='z'){
        cout<<d<<"  ";
        d++;
    }
    return 0;
}