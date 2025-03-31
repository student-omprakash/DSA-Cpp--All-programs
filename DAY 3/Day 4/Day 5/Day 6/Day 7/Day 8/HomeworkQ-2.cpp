/*Third Pattern: Take an input n from the user, 
and create a pattern like below, for n=5, we have output like this. 
        5 
      5 4 
    5 4 3 
  5 4 3 2
5 4 3 2 1
*/
# include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter The Number:";
    cin>>n;
    for(i=5;i>=1;i--){
        for(j=5;j>n-i;j--){
            cout<<"  ";
        }
        for(j=5;j>=i;j--){
                cout<<j<<" ";
            }
            cout<<endl;
    }

    return 0;
}