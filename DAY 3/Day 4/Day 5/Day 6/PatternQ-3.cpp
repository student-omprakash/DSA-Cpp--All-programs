/*wap to print the pattern
5 4 3 2 1
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1
5 4 3 2 1
*/
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=5;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}