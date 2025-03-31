/*print the pattern
a b c d e
a b c d e
a b c d e
a b c d e
a b c d e 
*/
# include<iostream>
using namespace std;
int main(){
    int n;
    //char c='a';
    cout<<"Enter The Rows:";
    cin>>n;
    for(char i='a';i<'a'+n;i++){
        for(char j='a';j<'a'+n;j++){
            //char d=c+j-1;
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}