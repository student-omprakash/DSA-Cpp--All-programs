//wap to sort the vowels in a string.
// where string contains both upper and lower case letters.
// sort bases on the their ASCII values
//->leetcode(2785):->Medium
//Ex:->Input: s = "lEetcOde"
//  Output: "lEOtcede"
//T.C=o(s.size()),S.C=o(1)
# include<iostream>
using namespace std;
string sort_vowel(string s){
    int n=s.size();
    //create the two vectors to count the frequency of upper and lower case letters
    vector<int>lower(26,0);
    vector<int>upper(26,0);
    for(int i=0;i<n;i++){
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            upper[s[i]-'A']++;
            s[i]='#';
        }
        else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            lower[s[i]-'a']++;
            s[i]='#';
        }
    }
    string ans;
    //now sort the vowels for upper case letters
    for(int i=0;i<26;i++){
        char c='A'+i;
        while(upper[i]){
            ans+=c;
            upper[i]--;
        }
    }
    //now sort the vowels for the lower case letters
    for(int i=0;i<26;i++){
        char c='a'+i;
        while(lower[i]){
            ans+=c;
            lower[i]--;
        }
    }
    //now add the sorted ans string into the original string
    int index=0;
    for(int i=0;i<n;i++){
        if(s[i]=='#'){
            s[i]=ans[index];
            index++;
        }
    }
    return s;

}
int main(){
    //take a string as input from the user
    string s;
    cout<<"Enter the String: ";
    getline(cin,s);
    //function call for sort the vowel
    cout<<sort_vowel(s);
    return 0;
}


