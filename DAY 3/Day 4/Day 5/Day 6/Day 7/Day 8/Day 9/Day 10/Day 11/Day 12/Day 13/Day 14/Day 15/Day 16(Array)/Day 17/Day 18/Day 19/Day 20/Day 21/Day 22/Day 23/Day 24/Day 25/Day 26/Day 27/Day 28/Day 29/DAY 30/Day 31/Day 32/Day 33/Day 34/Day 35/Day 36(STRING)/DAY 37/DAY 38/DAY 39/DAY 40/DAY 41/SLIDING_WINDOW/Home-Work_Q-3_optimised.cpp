//->Smallest window containing 0, 1 and 2
//->optimised-using sliding window protocol
//T.C=o(n)->where n-represents the size of the string
//s.c=o(1);
# include<iostream>
using namespace std;
int smallest_window(string s){
    //first i will take two pointers first and second and they will start from the 0
    //after that i will increse the window size whenever i get the 0,1,2
    //when i get the 0,1,2 now i will decrease the window size
    int first=0;
    int c0=0,c1=0,c2=0;
    int mini=INT_MAX;
    for(int second=0;second<s.size();second++){
        if(s[second]=='0') c0++;
        else if(s[second]=='1') c1++;
        else c2++;
        while(c0>0&&c1>0&&c2>0){
            mini=min(mini,second-first+1);
            //now we will shrink the window_size
            if(s[first]=='0') c0--;
            else if(s[first]=='1') c1--;
            else c2--;
            first++;
        }
    }
    return mini==INT_MAX?-1:mini;  
}
int main(){
    string s;
    cout<<"Enter The String";
    getline(cin,s);
    //function call
    cout<<smallest_window(s);
    return 0;
}