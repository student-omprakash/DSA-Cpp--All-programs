// //wap to find the maximum sum of the sub array in all possible sub-arrays
// //T.C=o(n^2);
// //Auxilary Space Complexity=o(1)->no extra space is or array is created
// # include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter The Size Of Array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter The Elements Of Array: ";
//     //array elements as input
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxi=INT_MIN;
//     //loop for starting point of array
//     for(int i=0;i<n;i++){
//         int current_sum=0;
//         //loop for ending point of array
//         for(int j=i;j<n;j++){
//             //output elements of sub array form stat point to end point
//             current_sum+=arr[j];
//             maxi=max(maxi,current_sum);
            
//         }
//     }
//     cout<<"Maximum sum of sub array is: "<<maxi;

// }





# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //first for loop
    int sum=0, maxi=INT_MIN;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
         sum+=arr[j];
         maxi=max(maxi,sum);
        }
    }
    cout<<maxi;
    return 0;
}

