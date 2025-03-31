//wap to find the transpose of a matrix
//T.C=o(n^2)
//Auxilary space complexity=o(1)
//where n is the no. of rows and columns in matrix
//optimised approach
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Rows And columns: ";
    cin>>n;
    vector<vector<int> >matrix(n,vector<int>(n));
    cout<<"Enter The Rows And Columns in matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);

        }
    }
    //Display the transpose matrix
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}