/*Third Pattern: Take an input n from the user, 
and create a pattern like below, for n=5, we have output like this.    
        A 
      A B A
    A B C B A 
  A B C D C B A
A B C D E D C B A 
*/
# include<iostream>
using namespace std;
int main(){
    int n,i,j;
    char a,b;
    cout<<"Enter The Number: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(a='A';a<'A'+i;a++){
            cout<<a<<" ";
        }
        for(b='A'+i-2;b>='A';b--){
            cout<<b<<" ";
        }
        cout<<endl;
    }
    return 0;
}