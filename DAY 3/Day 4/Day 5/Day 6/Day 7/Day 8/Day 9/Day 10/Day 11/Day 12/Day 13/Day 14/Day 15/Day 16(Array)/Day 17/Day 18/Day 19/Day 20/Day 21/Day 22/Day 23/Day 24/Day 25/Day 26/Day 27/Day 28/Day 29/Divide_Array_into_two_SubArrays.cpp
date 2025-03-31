//wap to divide an array into two sub arrays that sum of both sub arrays are equal
//if that is possible than return 1 else return 0
//Ex:-arr=[3,4,-1,5,8,20,-10,8] so here sum ofarr1=[3,4,-1,5,8]=18 and 
//sum of arr2=[20,-10,8]=18 both are equal so output should be 1
//T.C=o(n);
# include<iostream>
using namespace std;
bool divide(vector<int>arr){
    //variable declared
    int total_sum=0,prefix_sum=0,n=arr.size();
    //sum of array
    for(int i=0;i<n;i++){
        total_sum+=arr[i];
    }
    //loop for calculating prefix sum
    for(int j=0;j<n;j++){
        //prefix_sum
        prefix_sum+=arr[j];
        int ans=total_sum-prefix_sum;
        //checking sum of both arrays are equla or not 
        if(ans==prefix_sum){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter The Size of Vector: ";
    //size of vector as input
    cin>>n;
    //vector declared
    vector<int>v(n);
    cout<<"Enter the Elements in Vector: ";
    //vectors elements as input
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //function call
    cout<<divide(v);
    return 0;
}