//wap to segregate 0's and 1's using vector
# include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());//-> Time Complexity of this algorithm is o(n*logn) always remember this;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}

