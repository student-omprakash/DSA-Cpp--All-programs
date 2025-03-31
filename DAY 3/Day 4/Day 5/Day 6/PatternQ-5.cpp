/*print the pattern
a a a a a
b b b b b 
c c c c c
d d d d d
e e e e e
*/
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Rows:";
    cin>>n;
    for(char c='a';c<'a'+n;c++){
        for(char d='a';d<'a'+n;d++){
            cout<<c<<" ";
        }
        cout<<"\n";
    }
    return 0;
}