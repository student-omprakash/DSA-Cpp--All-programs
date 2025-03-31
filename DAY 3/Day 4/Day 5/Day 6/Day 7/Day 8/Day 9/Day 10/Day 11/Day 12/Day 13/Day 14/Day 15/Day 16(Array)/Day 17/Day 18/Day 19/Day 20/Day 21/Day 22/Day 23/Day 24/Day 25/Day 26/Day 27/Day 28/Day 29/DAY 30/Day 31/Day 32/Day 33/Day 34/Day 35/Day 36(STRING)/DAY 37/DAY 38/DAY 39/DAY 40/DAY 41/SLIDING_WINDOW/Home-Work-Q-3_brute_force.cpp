//->Smallest window containing 0, 1 and 2
//->brute-force approach
//T.C=o(n^2)->where n-represents the size of the string
# include<iostream>
using namespace std;
int smallest_window(string s){
    int minimum=INT_MAX;
    for(int i=0;i<s.size();i++){
        int c0=0,c1=0,c2=0;
        for(int j=i;j<s.size();j++){
            if(s[j]=='0') c0++;
            else if(s[j]=='1') c1++;
            else  c2++;
            if(c0>0&&c1>0&&c2>0){
                minimum=min(j-i+1,minimum);
                break;

            }

        }
    }
    return(minimum==INT_MAX)?-1:minimum;
}
int main(){
    string s;
    cout<<"Enter The String";
    getline(cin,s);
    //function call
    cout<<smallest_window(s);

    return 0;
}