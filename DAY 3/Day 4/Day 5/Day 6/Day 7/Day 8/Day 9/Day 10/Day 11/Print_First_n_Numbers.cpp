//print the first n natural numbers
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n;
    int i=1;
    while(i<=n){
        cout<<i<<"\n";
        i++;
    }

    return 0;
}