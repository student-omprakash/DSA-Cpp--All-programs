//wap to reverse each row of matrix
# include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter The Rows And Columns: ";
    cin>>row>>col;
    int arr[row][col];
    cout<<"Enter The Elements For Matrix: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j]; 
        }
    }
    //now reverse the rows of matrix;
    for(int i=0;i<row;i++){
        int start=0,end=col-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }

    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}