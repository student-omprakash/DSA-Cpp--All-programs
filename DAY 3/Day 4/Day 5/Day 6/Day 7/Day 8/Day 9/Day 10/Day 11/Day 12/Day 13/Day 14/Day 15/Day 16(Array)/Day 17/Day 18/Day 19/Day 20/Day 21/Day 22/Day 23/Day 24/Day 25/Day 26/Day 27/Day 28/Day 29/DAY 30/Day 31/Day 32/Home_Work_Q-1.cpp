//Transpose of Matrix: ( Use lower triangle for Transpose)
# include<iostream>
using namespace std;
vector<vector<int> >transpose(vector<vector<int> >matrix){
    int row=matrix.size();
    int col=matrix[0].size();
   for(int j=0;j<col-1;j++){
    for(int i=j+1;i<col;i++){
        swap(matrix[i][j],matrix[j][i]);
    }
   }
   return matrix;
    
}
int main(){
    int n;
    cout<<"Enter The Rows or columns: ";
    cin>>n;
    //vector<int>ans;
    vector<vector<int > >matrix(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    //function call
    vector<vector<int> >ans=transpose(matrix);
    cout<<"Transpose of matrix: "<<" ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}