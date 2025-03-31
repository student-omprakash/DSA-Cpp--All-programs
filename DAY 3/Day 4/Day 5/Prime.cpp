# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n;
    if(n<2){
        cout<<"Not Prime";
    }
    else {
        for(int i=2;i<n;i++){
            if(n%i==0){
                cout<<"Not Prime";
                return 0;
            }   
        }
        cout<<"Prime Number";
    }
    return 0;
}