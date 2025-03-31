// wap in c++ for subtract two matrix.
// T.C=o(r1*c1)
// Auxilary space complixity=o(r1*c1);
# include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"Enter The Rows and coloumns for first matrix: ";
    cin>>r1>>c1;
    int matr1x[r1][c1];
    cout<<"Enter The Rows And Coloumns for second matrix: ";
    cin>>r2>>c2;
    int matrix2[r2][c2];
    cout<<"Enter The "<< r1*c1<<" Elements for first matrix: ";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>matr1x[i][j];
        }
    }
    cout<<"Enter The "<< r2*c2<<" Elements for second matrix: ";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>matrix2[i][j];
        }
    }
    int matrix3[r1][c1];
    
    if(r1==r2&&c1==c2){
        cout<<"Matrix subtraction is possible"<<endl;
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                matrix3[i][j]=matr1x[i][j]-matrix2[i][j];
            }
        }
    }
    else if(r1!=r2||c1!=c2){
        cout<<"Matrix subtraction is not possible: "<<endl;
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<matrix3[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

