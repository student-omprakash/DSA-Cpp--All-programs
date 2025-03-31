//wap to sort the array using insertion sort
// # include<iostream>
// using namespace std;
// int main(){
//     //array declare
//     int arr[1000];
//     int n;
//     cout<<"Enter The Size Of Array: ";
//     //size as input
//     cin>>n;
//     //array as input
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     //outer for loop to repet the steps
//     for(int i=1;i<n;i++){
//     //inner for loop
//     for(int j=i;j>0;j--){
//         if(arr[j]<arr[j-1]){
//             swap(arr[j],arr[j-1]);
//         }
//             else {
//             break; 
//             }  
//         }
//     }
//     //output
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



//wap n cpp to sort the array using insertion sort
# include<iostream>
using namespace std;
int main(){
    //array declareion
    int arr[1000];
    int n;
    //size as input
    cout<<"Enter The Size Of Array: ";
    cin>>n;
    //array as input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //outer for loop
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
            }
        }
    }
    //array as output
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}