//wap to find the smallest distinct window(GFG-problem)
//write the brute-force
//T.C=o(n^3)
# include<iostream>
# include<vector>
using namespace std;
bool allpresent(string s,int start,int end,int distinct_count){
    int n=s.size();
    //here finding the how many distinct characters are present in a particular
    //substring
    vector<int>count(256,0);
    int icount=0;
    for(int i=start;i<=end;i++){
       if(count[s[i]]==0){
        icount++;
       }
       count[s[i]]++;
    }
    //if distinct count in the original string is equal to the distinct count in the 
    //substring return true else return false
    return icount==distinct_count;

}
int smallest_distinct_window(string s){
    //now first create one vector and store all the unique characters of original string
    int n=s.size();
    int distinct_count=0;
    vector<int>di_count(256,0);
    //here finding how many distinct characters are present int the original string
    for(int i=0;i<n;i++){
        if(di_count[s[i]]==0){
          distinct_count++;
        }
        di_count[s[i]]++;

    }
   
    int mini=n;
    //generating all the possible substings
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //checking for all the characters are present or not in a paricular 
            //substring
            if(allpresent(s,i,j,distinct_count)){
                //finding the minimum length of sliding window
            mini=min(mini,j-i+1);
            }
        }
    }
    return mini;
}
int main(){
    string s;
    cout<<"Enter The String: ";
    getline(cin,s);
    //function call
    cout<<smallest_distinct_window(s);
    return 0;
}





