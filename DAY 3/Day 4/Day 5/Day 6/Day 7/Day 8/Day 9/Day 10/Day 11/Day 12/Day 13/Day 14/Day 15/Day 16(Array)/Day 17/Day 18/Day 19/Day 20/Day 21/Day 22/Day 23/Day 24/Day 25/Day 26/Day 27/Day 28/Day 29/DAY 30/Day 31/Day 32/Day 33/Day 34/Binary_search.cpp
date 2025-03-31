# include<iostream>
using namespace std;
bool binary_search(vector<vector<int> >matrix,int target){
   //apply binary serach
   int n=matrix.size();
   int m=matrix[0].size();
  
   for(int i=0;i<n;i++){
    if(matrix[i][0]<=target&&matrix[i][m-1]>=target){
        //then apply binary search on that row
        int start=0;
        int end=m-1;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            if(target==matrix[i][mid]){
                return true;
            }
            else if(target>matrix[i][mid]){
                start=mid+1;
            }
            else{
                end=mid-1;

            }
        }
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
