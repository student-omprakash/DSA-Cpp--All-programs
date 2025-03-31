//Given a matrix of size n*n, Print sum of diagonal element.
//Ex: 1 2 3 
//    4 5 6 
//    7 8 9
/*Its answer: 1+5+9 , 3+5+7, So the total sum will be 1+5+9+3+5+7 = 30.
Here we can see that 5 is included 2 times, 
so we should include it only 1 time so the final 
answer will be, 30-5 = 25. So the final answer will be 25.*/
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
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j||i+j==row-1){
                sum+=arr[i][j];
            }
        }
    }
    cout<<sum<<" ";
    return 0;
}