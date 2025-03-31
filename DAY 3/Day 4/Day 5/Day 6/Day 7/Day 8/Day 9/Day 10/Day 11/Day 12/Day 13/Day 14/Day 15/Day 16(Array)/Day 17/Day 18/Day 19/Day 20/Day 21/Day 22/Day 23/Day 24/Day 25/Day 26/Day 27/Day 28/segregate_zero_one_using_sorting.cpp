//Ex:->arr=[1,0,1,0,1,0]->output shold be ->arr=[0,0,0,1,1,1]
//using sorting with T.C=o(n^2);
# include<iostream>
using namespace std;
void segregate_using_sorting(int arr[],int n){
    //selection sort algorithm
    int min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
    //print the segregate array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int n;
    cout<<"Enter The Size of Array: ";
    cin>>n;
    //array declared
    int arr[1000];
    //array elements as input
    cout<<"Enter The Elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //function call
    segregate_using_sorting(arr,n);
    return 0;
}