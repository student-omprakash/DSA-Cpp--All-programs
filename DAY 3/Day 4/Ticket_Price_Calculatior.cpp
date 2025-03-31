# include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter The Age: ";
    cin>>age;
    if(age<=12||age>=65){
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }

    return 0;
}