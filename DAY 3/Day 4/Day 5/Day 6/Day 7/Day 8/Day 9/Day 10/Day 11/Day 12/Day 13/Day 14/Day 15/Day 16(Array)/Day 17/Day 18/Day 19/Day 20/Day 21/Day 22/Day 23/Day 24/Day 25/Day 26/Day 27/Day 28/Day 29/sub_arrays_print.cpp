//wap where take an array as input from user and print all the possible sub-arrays
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Size Of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter The Elements Of Array: ";
    //array elements as input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //loop for starting point of array
    for(int i=0;i<n;i++){
        //loop for ending point of array
        for(int j=i;j<n;j++){
            //output elements of sub array form stat point to end point
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }   
            cout<<" ";
        }

        cout<<endl;
    }
}
