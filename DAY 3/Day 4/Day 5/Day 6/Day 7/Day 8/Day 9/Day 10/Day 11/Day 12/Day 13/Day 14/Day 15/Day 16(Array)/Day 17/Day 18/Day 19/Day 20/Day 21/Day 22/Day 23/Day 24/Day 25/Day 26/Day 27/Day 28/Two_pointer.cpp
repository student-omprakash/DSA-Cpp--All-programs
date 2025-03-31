//wap to segregate 0 and 1 in an array
//ex;-arr=[1,0,0,1,0,0,1]->output:[0,0,0,0,1,1,1]
//it can be done using sorting but for that T.C=o(n^2)
//to solve it using first count the zeros and than one's can be done in 
//T.C=o(n) but if i say we can traverse array only one's then approach of
//two pointer will come on our mind for that T.C=o(n)
# include<iostream>
using namespace std;
void segregate(int arr[],int n){
    int start=0,end=n-1;
    while(start<end){
        if(arr[start]==0){
            start++;
        }
        else {
            if(arr[end]==1){
                end--;
            }
            else{
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
        }

    }
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    //array declare
    int arr[n];
    //array elements as input
    cout<<"Enter The Elements of array using 0 and 1";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //function call to segregate the '0' and '1'
    segregate(arr,n);
    //array as output
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
} 