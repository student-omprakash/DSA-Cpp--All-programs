/*print the pattern
      *
    * *
  * * *
* * * *
*/
# include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"Enter The Rows:";
    cin>>n;
    for(i=1;i<=n;i++){
        //to print space
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //to print star
        for(k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}