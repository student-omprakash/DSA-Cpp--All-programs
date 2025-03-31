/*print the pattern
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 
*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
*/
# include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter The Rows:";
    cin>>n;
    for(i=1;i<=n;i++){
        //star print
        for(j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        //space print 
        for(j=1;j<=2*(i-1);j++){
            cout<<"  ";
        }
        //star print
        for(j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl; 

        
    }
    for(i=n;i>=1;i--){
        //star print
        for(j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        //space print 
        for(j=1;j<=2*(i-1);j++){
            cout<<"  ";
        }
        //star print
        for(j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl; 
    }

    return 0;
}