/*Find the index of a specific element in an array, 
if the element is not present, print -1. 
Ask the size of the array from the user and then implement it.
*/
# include<iostream>
using namespace std;
int main(){
    int n,i,j,x;
    cout<<"Enter The Size Of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter The Element That You want to search: "<<endl;
    cin>>x;
    cout<<"Enter The Elemnts of array: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(j=0;j<n;j++){
        if(arr[j]==x){
            cout<<j;
            break;
        }
        else {
            cout<<"-1";
            break;
        }
    }
    

    return 0;
}