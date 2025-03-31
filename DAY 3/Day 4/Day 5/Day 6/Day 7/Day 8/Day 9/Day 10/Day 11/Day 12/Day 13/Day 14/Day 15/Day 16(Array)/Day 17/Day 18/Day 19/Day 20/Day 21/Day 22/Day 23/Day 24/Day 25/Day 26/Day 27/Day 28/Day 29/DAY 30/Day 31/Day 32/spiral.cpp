// # include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter The Rows And Columns in matrix: ";
//     cin>>n;
//     int matrix[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>matrix[i][j];
//         }
//     }
//     //print in spiral 
//     int top=0,right=n-1,left=0,bottam=n-1;
//     while (top <= bottam && left <= right){
//     //first traverse top row
//     for(int i=left;i<=right;i++){
//         cout<<matrix[top][i]<<" ";
//     }
//     top++;
//     //right row
//     for(int i=top;i<=bottam;i++){
//         cout<<matrix[i][right]<<" ";
//     }
//     right--;
//     //bottam row
//     if(top<=bottam){
//     for(int i=right;i>=left;i--){
//         cout<<matrix[bottam][i]<<" ";
//     }
//     bottam--;
//     }
//     //left row
//     if(left<=right){
//     for(int i=bottam;i>=top;i--){
//         cout<<matrix[i][left]<<" ";
//     }
//     left++;
//     }
//     }
//     return 0;
// }




#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;
    int matrix[n][n];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Spiral traversal
    int top = 0, right = n - 1, left = 0, bottom = n - 1;

    while (top <= bottom && left <= right) {
        // Traverse top row
        for (int i = left; i <= right; i++) {
            cout << matrix[top][i] << " ";
        }
        top++;

        // Traverse right column
        for (int i = top; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        right--;

        // Traverse bottom row (if still within bounds)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }

        // Traverse left column (if still within bounds)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }

    return 0;
}
