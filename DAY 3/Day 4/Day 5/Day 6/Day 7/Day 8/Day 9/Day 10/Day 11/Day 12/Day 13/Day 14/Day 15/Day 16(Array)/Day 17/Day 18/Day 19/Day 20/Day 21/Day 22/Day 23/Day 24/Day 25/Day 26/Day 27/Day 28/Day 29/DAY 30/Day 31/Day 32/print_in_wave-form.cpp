//wap to print the elements of 2d_vector in wave form
//Ex:->  matrix[3][3]
/* 1 2 3
   4 5 6
   7 8 9
*/
//output should in like-> 1 4 7 8 5 2 3 6 9
//T.C=o(row*col) and Auxilary space complixity=o(1)
# include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter The Rows And Columns in vector: ";
    cin>>row>>col;
    vector<vector<int> >matrix(row,vector<int>(col));
    cout<<"Enter The Elements in vector: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }
    //display in the wave form
    //logic of wave form is that the if column number is even then print up->down
    //if column number is odd then print from down->up
    for(int j=0;j<col;j++){
        if(j%2==0){
            //print up->down
            for(int i=0;i<row;i++){
                cout<<matrix[i][j]<<" ";
            }
            //cout<<endl;
        }
        else{
            //print from down->up 
            for(int i=row-1;i>=0;i--){
                cout<<matrix[i][j]<<" ";
            }
            //cout<<endl;
        }
    }
    return 0;
}