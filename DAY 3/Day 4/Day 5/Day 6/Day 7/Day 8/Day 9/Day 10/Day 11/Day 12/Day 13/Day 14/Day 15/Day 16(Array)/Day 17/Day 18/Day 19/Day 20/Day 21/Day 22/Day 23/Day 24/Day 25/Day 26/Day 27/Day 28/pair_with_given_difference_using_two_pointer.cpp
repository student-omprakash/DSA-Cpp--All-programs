//wap to find the pair with given difference using two pointer approach
# include<iostream>
using namespace std;
vector<int>pair_with_given_difference(int n,int d,vector<int>&v){
    sort(v.begin(),v.end());
    int start=0,end=1;
    while(end<n){
        if(v[start]-v[end]==d){
            v.push_back(start);
            v.push_back(end);
        }
        else if(v[end]-v[start]<d){
            end++;
        }
        else{
            start++;
        }
        if (start == end) {
            end++;
        }
    }
    return v;
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