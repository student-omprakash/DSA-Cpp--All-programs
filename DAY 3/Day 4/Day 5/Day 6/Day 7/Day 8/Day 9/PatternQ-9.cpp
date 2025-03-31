/*print the pattern
    *
   * *
  * * *
 * * * * 
* * * * *
*/
# include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter The Rows:";
    cin>>n;
    for(i=1;i<=n;i++){
        //print space
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        //print star
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}