//wap to rotate the matrix by 180 
//broote-force approach
//T.C=o(n^2) and S.C=o(n^2)->a new 2d_array is created named as ans;
//Ex:->1 2 3
//     4 5 6
//     7 8 9

//output:->
// 9 8 7 
// 6 5 4 
// 3 2 1 
# include<iostream>
using namespace std;
void rotate_by_180_2(vector<vector<int> >matrix){
    int n=matrix.size();
    for(int i=0;i<2;i++){
    //first find the transpose
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    
    //second reverse the each row of matrix
    for(int i=0;i<n;i++){
        int start=0;
        int end=n-1;
        while(start<end){
            swap(matrix[i][start],matrix[i][end]);
            start++;
            end--;
        }
    }
    }
    //display the output
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int n;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    vector<vector<int> >matrix(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    //function call
    rotate_by_180_2(matrix);
    return 0;
} 