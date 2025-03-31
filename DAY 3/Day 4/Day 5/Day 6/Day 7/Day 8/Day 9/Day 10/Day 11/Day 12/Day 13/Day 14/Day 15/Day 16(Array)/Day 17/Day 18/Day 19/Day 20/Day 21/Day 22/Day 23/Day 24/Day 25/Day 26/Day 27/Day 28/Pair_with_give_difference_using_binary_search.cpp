//wap to find the pair of given difference using binary serach with T.C=o(n*logn);
# include<iostream>
using namespace std;
vector<int>pair_with_given_difference(int n,int d,vector<int>&v){
    sort(v.end(),v.begin());
    for(int i=0;i<n;i++){
        int diff=v[i]-d;
        for(int j=i+1;j<n;j++){
            if(arr)
        }
    }




}
int main(){
    int n;
    cout<<"Enter The size of vector: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elemnts of vector: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //differce target as input
    int d;
    cout<<"Enter The Targeted Difference: ";
    cin>>d;
    //function call
    pair_with_given_difference(n,d,v);
    return 0;
}