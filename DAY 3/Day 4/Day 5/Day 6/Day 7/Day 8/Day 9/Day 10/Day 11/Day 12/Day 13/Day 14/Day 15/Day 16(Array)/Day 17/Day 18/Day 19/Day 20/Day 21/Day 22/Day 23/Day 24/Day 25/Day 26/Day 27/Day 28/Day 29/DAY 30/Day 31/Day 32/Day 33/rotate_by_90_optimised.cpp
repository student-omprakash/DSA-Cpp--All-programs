//wap to rotate a matrix by 90 degree
//Ex:- 1 2 3
//     4 5 6
//     7 8 9
//output->  7 4 1
//          8 5 2
//          9 6 3
//optimised T.C=o(n^2);
//Auxilary space=o(1);
//logic->1. find the transpose
//2. reverse each row of the transpose matrix
# include<iostream>
using namespace std;
void rotate_by_90(vector<vector<int> >matrix,int n){
    //first find the transpose
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    //second reverse each row of matrix
    for(int i=0;i<n;i++){
        int start=0;
        int end=n-1;
        while(start<end){
            swap(matrix[i][start],matrix[i][end]);
            start++;
            end--;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }



}
int main(){
    int n;
    cout<<"Enter The Elements: ";
    cin>>n;
    vector<vector<int> >matrix(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    //function call
    cout<<endl;
    rotate_by_90(matrix,n);
    
    return 0;
}