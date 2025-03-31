//wap to calculate the length of longest palindrome(leetcode-409)
//Ex:->"abccccdd"->out:->7
//T.C=o(s.size()),s.c=o(1)->because we dont create any extra space;
# include<iostream>
using namespace std;
int longest_palindrome(string s){
    //first step is cteate an array of 26 size and intialize all with 0
    vector<int>arr(26,0);
    //count the frequency of each character
    for(int i=0;i<26;i++){
        arr[s[i]-'a']++;
    }
    //now take a ans variable that will store the lenght of longest_palindrome
    int ans=0,count=0;
    for(int i=0;i<26;i++){
        if(arr[i]%2==0){
            ans+=arr[i];
        }
        else{
            count++;
            ans+=arr[i]-1;
        }
    }
    if(count>0){
        ans+=1;
    }
    return ans;


}
int main(){
    string s;
    cout<<"Enter The String : ";
    getline(cin,s);
    cout<<longest_palindrome(s);
    return 0;
}