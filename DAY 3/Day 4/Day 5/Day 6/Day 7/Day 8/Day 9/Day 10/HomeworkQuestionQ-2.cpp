/*Even and Positive Number: Write a program that prints “YES” 
if a given number is both even and positive, otherwise it will print “NO”.
*/
# include<iostream>
using namespace  std;
int main(){
    int number;
    cout<<"Enter The Number: ";
    cin>>number;
    if(number>0&&number%2==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}