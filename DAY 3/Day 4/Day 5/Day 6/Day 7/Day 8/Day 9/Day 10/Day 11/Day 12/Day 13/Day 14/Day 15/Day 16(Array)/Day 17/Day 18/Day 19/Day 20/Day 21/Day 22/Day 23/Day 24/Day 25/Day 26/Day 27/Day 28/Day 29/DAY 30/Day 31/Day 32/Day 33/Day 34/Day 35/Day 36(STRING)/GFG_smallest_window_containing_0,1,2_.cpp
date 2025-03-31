//Smallest window containing 0, 1 and 2
//GFG problem brute force approach
//T.C=o(n^3),s.c=o(1)
//we will optimised it in further lectures
# include<iostream>
using namespace std;
bool allpresent(string s,int start,int end){
    int c0=0,c1=0,c2=0;
    for(int i=start;i<=end;i++){
        
        if(s[i]=='0') c0++;
        if(s[i]=='1') c1++;
        if(s[i]=='2') c2++;
        if(c0&&c1&&c2){
            return 1;
        }

    }
    return 0;
}
int main(){
    string s;
    getline(cin,s);
    int n=s.size();
    int ans=INT_MAX;
    //calculate all possible substrings
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(allpresent(s,i,j)){
                ans=min(ans,j-i+1);
            }
        }
    }
    cout<<ans;
    //then check for all presents

    return 0;
}
