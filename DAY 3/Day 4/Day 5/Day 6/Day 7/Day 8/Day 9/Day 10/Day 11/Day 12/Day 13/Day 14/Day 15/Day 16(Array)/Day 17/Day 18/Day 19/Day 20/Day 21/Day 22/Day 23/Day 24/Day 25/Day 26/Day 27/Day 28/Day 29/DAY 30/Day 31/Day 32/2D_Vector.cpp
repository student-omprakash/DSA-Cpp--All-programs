//creation of 2D vector and displying the elements of 2D vector
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
int main(){
    //create 2D vector
    int row,col;
    cout<<"Enter The Rows And Columns in matrix: ";
    cin>>row>>col;
    vector<vector<int> >matrix(row,vector<int>(col));
    //display the elements of vector
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }
    //finding rows and columns in vector
    cout<<"rows="<<matrix.size()<<" "<<endl;
    cout<<"columns="<<matrix[0].size()<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}