# include<iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"Enter The Rows And Columns: ";
    cin>>row>>column;
    int matrix[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>matrix[i][j];
        }
    }
    //create four variables
    int top=0;
    int right=column-1;
    int bottom=row-1;
    int left=0;
    while(left<=right&&top<=bottom){

    //print the top row
    for(int i=left;i<=right;i++){
        cout<<matrix[top][i]<<" ";
    }
    top++;

    //print the right column
    //one edge case here
    if(left<=right){
    for(int i=top;i<=bottom;i++){
        cout<<matrix[i][right]<<" ";
    }
    }
    right--;
    //print the bottom row
    //one edge case
    if(top<=bottom){
    for(int i=right;i>=left;i--){
        cout<<matrix[bottom][i]<<" ";
    }
    }
    bottom--;
    //print the left column
    for(int i=bottom;i>=top;i--){
        cout<<matrix[i][left]<<" "; 
    }
    left++;
    }



    return 0;
}