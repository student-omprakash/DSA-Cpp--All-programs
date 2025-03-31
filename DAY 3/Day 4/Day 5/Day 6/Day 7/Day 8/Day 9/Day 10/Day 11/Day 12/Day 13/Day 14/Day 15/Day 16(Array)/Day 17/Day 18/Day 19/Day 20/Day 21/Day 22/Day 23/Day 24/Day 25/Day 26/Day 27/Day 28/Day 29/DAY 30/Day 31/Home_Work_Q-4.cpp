// Largest Element: Find and print the largest element in the 2D array.
# include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter The Rows And Columns in matrix.";
    cin>>row>>col;
    int arr[row][col];
    cout<<"Enter The elements in matrix.";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int maxi=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
            }
            
        }
    }
    cout<<maxi<<" ";
    return 0;
}