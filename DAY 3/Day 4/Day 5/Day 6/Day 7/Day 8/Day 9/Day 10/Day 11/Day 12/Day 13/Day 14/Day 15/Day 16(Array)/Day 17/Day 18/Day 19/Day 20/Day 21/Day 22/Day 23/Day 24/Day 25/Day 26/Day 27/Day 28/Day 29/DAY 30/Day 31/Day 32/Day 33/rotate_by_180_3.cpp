# include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int start=0;
        int end=n-1;
        while(start<end){
            swap(matrix[start][i],matrix[end][i]);
            start++;
            end--;
        }
    }
    for(int i=0;i<n;i++){
        int start=0;
        int end=n-1;
        while(start<end){
            swap(matrix[i][start],matrix[i][end]);
            start++;
            end--;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}