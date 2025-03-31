# include<iostream>
using namespace std;
bool binary_search(vector<vector<int> >matrix,int target){
   
   int n=matrix.size();
   int m=matrix[0].size();
   int total=n*m;
   //now apply binary serarch in 1_D array
   int start=0;
   int end=total-1;
   while(start<=end){
    int mid=start+(end-start)/2;
    int row_index=mid/m;
    int col_index=mid%m;
    if(target==matrix[row_index][col_index]){
        return true;
    }
    else if(target>matrix[row_index][col_index]){
        start=mid+1;
    }
    else{
        end=mid-1;
    }

   }
   return false;


  
  
   
   
}
int main(){
    int n,m;
    cout<<"Enter The Rows and Columns: ";
    cin>>n>>m;
    vector<vector<int> >matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    int target;
    cout<<"Enter The Element that you want to search: ";
    cin>>target;
     //function call
     cout<<binary_search(matrix,target);
    return 0;
}
