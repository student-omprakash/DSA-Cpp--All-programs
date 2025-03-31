//print the matrix in the antidiagonal form
//Ex:-> n=3  
//1 2 3
//4 5 6
//7 8 9

//output:->1  2 4   3 5 7  6 8  9
# include<iostream>
using namespace std;
//function defination
vector<int>antidiagonal(int n,vector<vector<int> >matrix){
    //check how many diagonals are present that will be 2*n-1
    vector<int>ans;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(j+k==i){
                    ans.push_back(matrix[j][k]);
                }
            }
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter The n: ";
    cin>>n;
    vector<vector<int> >matrix(n,vector<int>(n));
    //take elements from user
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    //function for print the antidiagonal
    vector<int>ans=antidiagonal(n,matrix);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}