/*An array is given in decreasing order with Key,
Find the index of key, if key is not present, print -1;
*/
# include<iostream>
using namespace std;
int decreasing_Binary_search(int arr[],int n,int key){
    //variable
    int start=0,end=n-1,mid;
    //lopp
    while(start<=end){
        //find the middle
        mid=start+(end-start)/2;
        //arr[mid]==key
        if(arr[mid]==key){
            return mid;
        }
        //arr[mid]<key
        if(arr[mid]<key){
            end=mid-1;
        }
        //arr[mid]>key
        else start=mid+1;
    }
    return -1;
}
int main(){
    int arr[1000];
    int n,key;
    cout<<"Enter The Size Of Array: ";
    //size as input
    cin>>n;
    //array as input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //key as input
    cout<<"Enter The Element That You Want To Search: ";
    cin>>key;
    //function to find the required output
    cout<<decreasing_Binary_search(arr,n,key);

    return 0;
}