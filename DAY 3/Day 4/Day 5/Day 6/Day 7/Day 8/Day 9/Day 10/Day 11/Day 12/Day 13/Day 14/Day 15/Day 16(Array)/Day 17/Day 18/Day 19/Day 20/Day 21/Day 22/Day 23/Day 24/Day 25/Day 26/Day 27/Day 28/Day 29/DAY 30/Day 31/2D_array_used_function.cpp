# include<iostream>
using namespace std;
void display(int arr[][4],int row,int col){
    //here i have to  pass column no. because when i will print the elements of array
    //then compiler will find the location of any particular element using 
    //this formula=base_address+(row_index*coloumn+col_index)
    //so compiler need coloumn number that's why i have to pass the this element
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][4];
    cout<<"Enter The elements: ";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    //function call
    display(arr,3,4);
    return 0;
}