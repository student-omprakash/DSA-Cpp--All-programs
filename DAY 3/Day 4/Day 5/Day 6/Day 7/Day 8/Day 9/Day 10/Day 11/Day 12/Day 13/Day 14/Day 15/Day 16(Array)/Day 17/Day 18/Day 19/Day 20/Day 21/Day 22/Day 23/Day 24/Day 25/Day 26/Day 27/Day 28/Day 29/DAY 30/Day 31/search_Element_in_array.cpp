//wap to search the any element in array
# include<iostream>
using namespace std;
int main(){
    int row,coloumn;
    cout<<"Enter The Rows and Coloumns in 2_D Array: ";
    cin>>row>>coloumn;
    int arr[row][coloumn];
    cout<<"Enter The "<< row*coloumn<<" Elements In Array: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<coloumn;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;
   //searching the value
   for(int i=0;i<row;i++){
    for(int j=0;j<coloumn;j++){
        if(arr[i][j]==target){
            cout<<"Yes";
            //to finish the main function
            return 0;
        }
        
    }
   }
   cout<<"No";
   return 0;

}