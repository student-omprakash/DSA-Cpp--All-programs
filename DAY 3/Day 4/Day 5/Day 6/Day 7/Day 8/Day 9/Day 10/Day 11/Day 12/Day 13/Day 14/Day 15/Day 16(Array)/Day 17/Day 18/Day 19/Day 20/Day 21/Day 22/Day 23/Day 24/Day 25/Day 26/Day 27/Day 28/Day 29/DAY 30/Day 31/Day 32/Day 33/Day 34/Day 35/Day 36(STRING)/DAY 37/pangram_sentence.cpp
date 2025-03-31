//wap to check a sentence is pangram or not->leetcode(1832)
//a sentence is called to be pangram if every alphbet letter appers at least once
//string is containing only the lowercase letters
//Difficulty:Easy
//T.C=o(s.size()),s.c=o(1);
# include<iostream>
using namespace std;
bool pangram(string s){
    int n=s.size();
    vector<int>ans(26,0);
    for(int i=0;i<n;i++){
        ans[s[i]-'a']++;
    }
    //now visit to the ans array and check for zero
    for(int i=0;i<26;i++){
        if(ans[i]==0){
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    cout<<"Enter The String to check for pangram: ";
    getline(cin,s);
    //function call
    cout<<pangram(s);


    return 0;
}
