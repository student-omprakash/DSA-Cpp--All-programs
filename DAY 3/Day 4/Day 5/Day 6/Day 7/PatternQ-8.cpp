/*print the pattern
5
5 4 
5 4 3
5 4 3 2
5 4 3 2 1
*/
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=5;j-(n-i)>=1;j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}