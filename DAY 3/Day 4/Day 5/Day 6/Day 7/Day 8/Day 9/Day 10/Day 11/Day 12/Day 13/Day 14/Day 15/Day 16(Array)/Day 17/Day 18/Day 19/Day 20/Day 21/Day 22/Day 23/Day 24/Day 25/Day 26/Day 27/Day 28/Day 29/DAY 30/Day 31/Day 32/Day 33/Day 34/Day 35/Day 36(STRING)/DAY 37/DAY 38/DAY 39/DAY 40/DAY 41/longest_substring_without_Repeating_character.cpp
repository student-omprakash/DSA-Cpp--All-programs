//wap to find the longest substring without repeating characters
//Brute-force approach->T.C=o(n^3); 
# include<iostream>
using namespace std;
bool isunique(string s,int start,int end){
    for(int i=start;i<end;i++){
        for(int j=i+1;j<=end;j++){
            if(s[i]==s[j]){
                return false;
            }
        }
    }
    return true;
}
int longest_substr(string s){
    int maxi=-1;
    int n=s.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(isunique(s,i,j)){
                maxi=max(maxi,j-i+1);

            }
        }
    }
    return maxi;
}

int main(){
    string s;
    cout<<"Enter The String: ";
    getline(cin,s);
    //function calll
    cout<<longest_substr(s);
    return 0;
}
