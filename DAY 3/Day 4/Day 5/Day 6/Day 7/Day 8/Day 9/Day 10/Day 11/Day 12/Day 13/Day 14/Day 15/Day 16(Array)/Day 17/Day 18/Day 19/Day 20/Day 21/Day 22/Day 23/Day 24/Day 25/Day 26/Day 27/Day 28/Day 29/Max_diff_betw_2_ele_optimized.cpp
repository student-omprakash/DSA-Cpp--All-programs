// // Maximum Difference between Two Elements such that Larger 
// // Element Appears after the Smaller Element
// // with T.C=o(n)
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Size Of Array: ";
    cin>>n;
    int arr[1000];
    cout<<"Enter The Array Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min_element=arr[0];
    int max_diff=INT_MIN;
    for(int i=1;i<n;i++){
        max_diff=max(max_diff,arr[i]-min_element);
        min_element=min(min_element,arr[i]);
    }
    cout<<max_diff;
    return 0;
}
