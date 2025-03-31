//wap to calculate the sum of diagonal elements of a matrix;
//T.C=o(2*row)=o(row)
# include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter The rows And coloumns in matrix: ";
    cin>>row>>col;
    int arr[row][col];
    cout<<"Enter The Elements in Matrix: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int sum1=0,sum2=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){
                sum1+=arr[i][j];
            }
            if(i+j==row-1){
                sum2+=arr[i][j];
            }
        }
    }
    cout<<"Diagonal 1 sum="<<sum1<<endl;
    cout<<"Diagonal 2 sum="<<sum2<<endl;
    return 0;
}