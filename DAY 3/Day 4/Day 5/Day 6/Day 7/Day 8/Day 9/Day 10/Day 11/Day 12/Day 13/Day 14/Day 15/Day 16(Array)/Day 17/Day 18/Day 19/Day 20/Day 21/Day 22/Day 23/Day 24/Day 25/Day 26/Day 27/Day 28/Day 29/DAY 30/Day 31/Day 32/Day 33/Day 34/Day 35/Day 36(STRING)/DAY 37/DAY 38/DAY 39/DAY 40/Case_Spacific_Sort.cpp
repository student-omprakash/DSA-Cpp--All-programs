//wap to sort the case_spacific letters
//Input: n = 12, str = defRTSersUXI
//Output: deeIRSfrsTUX
//T.C=o(s.size()),s.c=o(s.size());
# include<iostream>
using namespace std;
string case_spacific_sort(string s){
    int n=s.size();
    //first count the frequecncy for upper and lower case letters
    vector<int>upper(26,0);
    vector<int>lower(26,0);
    for(int i=0;i<n;i++){
        if(s[i]>=65&&s[i]<=90){
            upper[s[i]-'A']++;
            s[i]='#';
        }
        else if(s[i]>=97&&s[i]<=123){
            lower[s[i]-'a']++;
            s[i]='*';
        }
    }
    //now sort the  lower case letters
    string ans1,ans2;
    for(int i=0;i<26;i++){
        while(lower[i]){
            char c='a'+i;
            ans1+=c;
            lower[i]--;
        }
    }
    //sort the upper case letters
    for(int i=0;i<26;i++){
        while(upper[i]){
            char c='A'+i;
            ans2+=c;
            upper[i]--;
        }
    }
  //now replace the sorted ans1 and asn2 in the string s
  int index2=0;
  int index1=0;
  for(int i=0;i<n;i++){
    if(s[i]=='#'){
        s[i]=ans2[index2];
        index2++;
    }
    else if(s[i]=='*'){
        s[i]=ans1[index1];
        index1++;
    }
  }
  return s;


}
int main(){
    string str;
    cout<<"Enter The String: ";
    getline(cin,str);
    //function call
    cout<<case_spacific_sort(str);
    return 0;
}