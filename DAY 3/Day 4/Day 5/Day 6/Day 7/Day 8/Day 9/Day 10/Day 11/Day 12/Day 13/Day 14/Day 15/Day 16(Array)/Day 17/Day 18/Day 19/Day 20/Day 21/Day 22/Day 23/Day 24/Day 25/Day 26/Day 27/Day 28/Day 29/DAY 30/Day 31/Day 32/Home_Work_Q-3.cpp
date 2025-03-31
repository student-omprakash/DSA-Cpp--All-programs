# include<iostream>
using namespace std;
vector<vector<int> >spiral(int n){
    vector<vector<int> >result(n,vector<int>(n,0));
    int count=1;
    int total=n*n;
    int top=0;
    int right=n-1;
    int bottom=n-1;
    int left=0;
    while(count<=total){
    //print the top row
     for(int i=left;i<=right;i++){
        result[top][i]=count;
        ++count;
     }
     top++;
    //print the right column
    for(int i=top;i<=bottom;i++){
        result[i][right]=count;
        ++count;
    }
    right--;

    //print the bottom row
    for(int i=right;i>=left;i--){
        result[bottom][i]=count;
        ++count;
    }
    bottom--;

    //print the left column
    for(int i=bottom;i>=top;i--){
        result[i][left]=count;
        ++count;
    }
    left++;
    }
    return result;

}
int main(){
    int n;
    cin>>n;
    vector<vector<int> >matrix(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
    //function call
    vector<vector<int> >ans=spiral(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}