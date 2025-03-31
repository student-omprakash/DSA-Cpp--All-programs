//wap to print the row index with maximum sum
# include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter The Rows and Coloumns in matrix: ";
    cin>>row>>col;
    int arr[row][col];
    cout<<"Enter The "<< row*col<<" Elements in matrix: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int maxi=INT_MIN,index=-1;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
            if(sum>maxi){
                maxi=sum;
                index=i;
            }
        }
    }
    cout<<index;
    return 0;
}