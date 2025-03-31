/*print the pattern
      A
    A B
  A B C
A B C D
*/
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(char k='A';k<'A'+i;k++){
            //char name='A'+k; if we intialize k as int
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}