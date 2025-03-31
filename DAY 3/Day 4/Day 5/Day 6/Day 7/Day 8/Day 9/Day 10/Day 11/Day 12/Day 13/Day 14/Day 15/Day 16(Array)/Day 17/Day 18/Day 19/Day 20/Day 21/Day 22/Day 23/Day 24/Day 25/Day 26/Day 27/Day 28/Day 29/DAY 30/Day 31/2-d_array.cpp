//wap to create a 2d array where take elements of 2_D Arrays from user and display them.
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
   //displaying the valiues
   for(int i=0;i<row;i++){
    for(int j=0;j<coloumn;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }

}