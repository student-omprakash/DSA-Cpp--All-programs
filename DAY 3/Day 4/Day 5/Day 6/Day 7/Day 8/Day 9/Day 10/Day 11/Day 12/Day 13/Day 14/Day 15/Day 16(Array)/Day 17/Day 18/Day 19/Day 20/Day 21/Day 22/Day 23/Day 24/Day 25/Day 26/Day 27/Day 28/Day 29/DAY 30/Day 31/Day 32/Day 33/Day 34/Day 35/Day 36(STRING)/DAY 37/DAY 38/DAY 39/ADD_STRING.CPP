//wap to add two string (leetcode-415)
//Ex:-Input: num1 = "456", num2 = "77"
//Output: "533"
//T.C=o(s.size()),s.c=o(s.size());
# include<iostream>
using namespace std;
string add(string num1,string num2){
    int index1=num1.size()-1;
    int index2=num2.size()-1;
    int carry =0;
    int sum;
    string ans;
    while(index1>=0){
        sum=(num1[index1]-'0')+(num2[index2]-'0')+carry;
        carry=sum/10;
        char c=sum%10+'0';
        ans+=c;
        index2--;
        index1--;
    }
    while(index2>=0){
        sum=(num2[index2]-'0')+carry;
        carry=sum/10;
        char c=sum%10+'0';
        ans+=c;
        index2--;
    }
    if(carry){
        ans+=carry-'0';
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    string num1,num2;
    cout<<"Enter the two strings: ";
    getline(cin,num1);
    getline(cin,num2);
    //function call to add two strings
    if(num1.size()<num2.size()){
        cout<<add(num2,num1);
    }
    else{
        cout<<add(num1,num2);
    }
    return 0;
}