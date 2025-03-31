//give an sorted array find the element in it.
# include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
    //start end,mid
    int start=0,end=n-1,mid;
    while(start<=end){
        mid=(start+end)/2;//write here mid=start+(end-start)/2  because start+end can give integer overflow error
         //arr[mid]==key
        if(arr[mid]==key){
            return mid;
        }
    //arr[mid]<key
    else if(arr[mid]<key){
        start=mid+1;
    }
    //arr[mid]>key
    else end=mid-1;
    }
    return -1;
}
int main(){
    int arr[1000];
    int n;
    cout<<"Enter The Size Of Array:";
    //size as input
    cin>>n;
    //array as input
    cout<<"Enter The Elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //search element as input
    int key;
    cout<<"Enter The Element That you want to search: ";
    cin>>key;
    //function to serch the element
    cout<<BinarySearch(arr,n,key);

    return 0;
}