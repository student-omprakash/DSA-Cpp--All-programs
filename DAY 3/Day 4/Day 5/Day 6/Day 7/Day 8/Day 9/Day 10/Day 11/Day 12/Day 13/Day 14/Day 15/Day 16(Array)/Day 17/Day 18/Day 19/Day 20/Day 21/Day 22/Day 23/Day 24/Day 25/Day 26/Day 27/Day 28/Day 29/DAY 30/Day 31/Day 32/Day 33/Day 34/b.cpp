# include<iostream>
using namespace std;
bool binary_search(vector<vector<int> >matrix,int target){
   //apply binary serach
   int n=matrix.size();
   int m=matrix[0].size();
   int p=0,q=m-1;
   while((p<=n-1&&p>=0)&&(q<=m-1&&q>=0)){
   if(matrix[p][q]==target){
    return true;
   }
   else if(matrix[p][q]<target){
    p++;
   }
   else{
    q--;
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
