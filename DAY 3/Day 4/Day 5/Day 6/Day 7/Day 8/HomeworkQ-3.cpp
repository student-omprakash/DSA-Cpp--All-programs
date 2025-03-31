/*Fourth Pattern: Take an input n from the user, 
and create a pattern like below, for n=5, we have output like this.
        E 
      E D
    E D C 
  E D C B
E D C B A
*/
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n;
    for(int i=5;i>=1;i--){
        for(int j=5;j>=n-i;j--){
            cout<<"  ";
        }
        for(int j=5;j>=i;j--){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
    return 0;
}