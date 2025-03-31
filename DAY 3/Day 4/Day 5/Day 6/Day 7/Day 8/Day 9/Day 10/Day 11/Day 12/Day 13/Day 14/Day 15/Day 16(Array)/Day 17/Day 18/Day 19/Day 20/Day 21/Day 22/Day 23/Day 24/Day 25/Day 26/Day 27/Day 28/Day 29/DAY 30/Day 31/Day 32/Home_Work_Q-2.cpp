// Given a Matrix of size n*m (n=rows and m= cols). 
//Reverse each column of the matrix.
# include<iostream>
using namespace std;
vector<vector<int> >reverse(vector<vector<int> >matrix){
    int row=matrix.size();
    int col=matrix[0].size();
    //implement the logic foir reverse the each column
    for(int j=0;j<col;j++){
        
            int start=0;
            int end=row-1;
           while(start<end){
            swap(matrix[start][j],matrix[end][j]);
            start++;
            end--;
           }
        
    }
    return matrix;

}
int main(){
    int row,col;
    cout<<"Enter The Rows And Columns in matrix: ";
    cin>>row>>col;
    vector<vector<int> >matrix(row,vector<int>(col));
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
        
    }
    
    //function call for the reverse each column of the 2d_vector
    vector<vector<int> >ans=reverse(matrix);
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}