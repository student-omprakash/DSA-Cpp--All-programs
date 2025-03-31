/*print the pattern(pascale triangle)
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/
# include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter The Rows:";
    cin>>n;
    for(i=1;i<=n;i++){
        //space print
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //1 to row print
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        //row-1 to 1 print
        for(j=i-1;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}