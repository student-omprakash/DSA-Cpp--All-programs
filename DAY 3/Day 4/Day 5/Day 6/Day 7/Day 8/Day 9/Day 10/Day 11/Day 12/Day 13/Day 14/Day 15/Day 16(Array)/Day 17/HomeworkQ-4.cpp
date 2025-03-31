/*Create an array of char types and store ‘a’ to ‘z’ in it.
Then print the element of the arrays.
*/
# include<iostream>
using namespace std;
int main(){
    char i,j;
    char arr[25];
    for(i='a';i<='z';i++){
        cin>>arr[i];
    }
    for(j='a';j<='z';j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}