/*Binary Search in a 2D array which is sorted in decreasing order.
N is the number of rows and M is the number of columns.*/
# include<iostream>
using namespace std;
bool binary_search(vector<vector<int> >matrix,int target){
    int n=matrix.size();
    int m=matrix[0].size();
    int row=0,col=m-1;
    while(row<=n-1&&col>=0){
        if(matrix[row][col]==target){
            return true;
        }
        else if(matrix[row][col]<target){
            col--;
        }
        else{
            row++;
        }
    }
    return false;

}
int main(){
    int n,m;
    cout<<"Enter The Number of Rows and columns: ";
    cin>>n>>m;
    vector<vector<int> >matrix(n,vector<int>(m));
    cout<<"Enter The Elements in the matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    int target;
    cout<<"Enter The Elements that you want to search: ";
    cin>>target;
    //function call
    cout<<binary_search(matrix,target);
    return 0;
}