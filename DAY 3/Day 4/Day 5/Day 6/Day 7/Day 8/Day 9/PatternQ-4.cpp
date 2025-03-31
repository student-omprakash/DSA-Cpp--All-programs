/*print the pattern
* * * * *
  * * * *
    * * *
      * *
        *
 */
# include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter The Rows:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i-1;j++){
            cout<<"  ";
        }
        for(j=0;j<=n-i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}