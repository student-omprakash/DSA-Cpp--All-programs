//3. Longest Substring Without Repeating Characters
//brute-force approach T.C=o(n^3),s.c=o(1)
//we will optimised it in further lectures
# include<iostream>
# include<string>
using namespace std;
bool isunique(string s,int start,int end){
    for(int i=start;i<=end;i++){
        for(int j=i+1;j<=end;j++){
            if(s[i]==s[j]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    string s;
    cout<<"Enter The String: ";
    getline(cin,s);
    int ans=0;
    int n=s.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(isunique(s,i,j)){
                ans=max(ans,j-i+1);
            }
        }
    }
    cout<<ans;
    return 0;
}