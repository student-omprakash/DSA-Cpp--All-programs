/*print the pattern
      1
    1 2
  1 2 3
1 2 3 4
*/
# include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cout<<"Enter The Rows: ";
    cin>>n;
    for(row=1;row<=n;row++){
        //to print space
        for(col=1;col<=n-row;col++){
            cout<<"  ";
        }
        //to print numbers
        for(col=1;col<=row;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}