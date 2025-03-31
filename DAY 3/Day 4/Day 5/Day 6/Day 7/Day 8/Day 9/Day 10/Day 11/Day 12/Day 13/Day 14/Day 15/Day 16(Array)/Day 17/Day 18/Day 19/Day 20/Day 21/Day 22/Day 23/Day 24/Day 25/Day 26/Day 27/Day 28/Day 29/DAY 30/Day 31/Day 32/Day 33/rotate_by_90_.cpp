//wap to rotate a matrix by 90 degree
//Ex:- 1 2 3
//     4 5 6
//     7 8 9
//output->  7 4 1
//          8 5 2
//          9 6 3
//broute-force T.C=o(n^2);
//Auxilary space=o(n^2);
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Rows and Columns in matrix: ";
    cin>>n;
    vector<vector<int> >matrix(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    vector<vector<int> >arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[j][n-i-1]=matrix[i][j];
        }
    }
    //display 
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}