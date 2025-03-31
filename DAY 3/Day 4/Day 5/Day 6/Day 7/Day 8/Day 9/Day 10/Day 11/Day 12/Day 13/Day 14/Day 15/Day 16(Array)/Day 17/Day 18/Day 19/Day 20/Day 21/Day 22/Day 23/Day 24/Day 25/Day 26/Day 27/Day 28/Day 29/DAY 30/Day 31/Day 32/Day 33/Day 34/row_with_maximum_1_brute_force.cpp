//wap to find the row with maximum 1's
# include<iostream>
using namespace std;
int maximum_1s(vector<vector<int> >matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    int row=0;
    int col=m-1;
    int ans=-1;
    while(col>=0&&row<=n-1){
        if(matrix[row][col]==1){
            ans=row;
            col--;
            

        }
        else{
            row++;
        }
    }
    return ans;

   
}
int main(){
    int row,col;
    cout<<"Enter The Number of rows and columns: ";
    cin>>row>>col;
    vector<vector<int> >matrix(row,vector<int>(col));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        cin>>matrix[i][j];
        }
    }
    //function call
    cout<<maximum_1s(matrix);
}