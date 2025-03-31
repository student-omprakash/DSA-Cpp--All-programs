/*print the pattern
a 
b b
c c c
d d d d
e e e e e
 */
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Rows:";
    cin>>n;
    for(char i='a';i<'a'+n;i++){
        for(char j='a';j<=i;j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}