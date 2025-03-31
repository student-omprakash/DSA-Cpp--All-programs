//wap to sort a string (GFG)
//Difficulty: Basic
//method-1->use in-built fun->sort(s.begin(),s.end()) T.C=o(n*lon)
//method-2 T.C=o(n),s.c=o(s.size())->we create a extra string named as ans
# include<iostream>
using namespace std;
string sort(string s){
    string ans;
    vector<int>arr(26,0);
    //frequency
    for(int i=0;i<s.size();i++){
        arr[s[i]-'a']++;
    }
    //now add the sortest frequency to ans string
    for(int i=0;i<26;i++){
        char c=i+'a';
        for(int j=0;j<arr[i];j++){
            ans+=c;
        }
    }
    return ans;
}
int main(){
    string s;
    cout<<"Enter the string to sort: ";
    getline(cin,s);
    //function call for sort the string
    cout<<sort(s);
    return 0;
}