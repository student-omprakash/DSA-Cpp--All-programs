/*Find the factorial of a number n using a while loop and do while loop.*/
// # include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter The Number:";
//     cin>>n;
//     int p=1;
//     int i=1;
//     while(i<=n){
//         p=p*i;
//         i++;
//     }
//     cout<<p;
//     return 0;
// }

//using do while loop
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n;
    int p=1,i=1;
    do{
        p*=i;
        i++;
    }
    while(i<=n);
    cout<<p;
    return 0;
}