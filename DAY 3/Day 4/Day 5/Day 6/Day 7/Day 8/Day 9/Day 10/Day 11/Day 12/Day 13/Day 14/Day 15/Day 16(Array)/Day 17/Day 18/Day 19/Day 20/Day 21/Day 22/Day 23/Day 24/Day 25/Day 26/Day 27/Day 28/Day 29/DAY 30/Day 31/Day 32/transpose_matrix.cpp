//wap to find the transpose of a matrix
//T.C=o(n^2)
//Auxilary space complexity=o(n^2)
//where n is the no. of rows and columns in matrix
# include<iostream>
using namespace std;
int main(){
    int row,col;
   
    cout<<"Enter The Rows amd columns in matrix: ";
     cin>>row>>col;
     if(row!=col){
        cout<<"Matrix transpose is not possible: "<<endl;
     }
     int matrix[row][col];
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
     }
     //create one more 2d_array to transpose the matrix
     int arr[row][col];
     for(int i=0;i<row;i++){
     for(int j=0;j<col;j++){
    arr[i][j]=matrix[j][i];
    }
     }
     //display the array with transpose
     cout<<endl;
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }

    return 0;
}