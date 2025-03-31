/*print the pattern
* * * *
* * * *
* * * *
* * * *
*/
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The No. Of Rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    return 0;
}