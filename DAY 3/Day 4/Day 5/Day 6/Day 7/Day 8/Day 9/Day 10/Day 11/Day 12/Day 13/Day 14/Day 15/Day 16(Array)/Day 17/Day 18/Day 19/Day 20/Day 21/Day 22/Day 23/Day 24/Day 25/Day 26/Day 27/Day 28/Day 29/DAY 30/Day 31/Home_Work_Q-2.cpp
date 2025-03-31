//Print sum of each column in 2D array.
# include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter The Rows And Columns: ";
    cin>>row>>col;
    int arr[row][col];
    cout<<"Enter The elements.";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
      //second for loop for the coloumns
    for(int j=0;j<col;j++){
        int sum=0;
          //second for loop for the rows
        for(int i=0;i<row;i++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
    return 0;
}