//wap to find the longest substring without repeating characters using the
// sliding window protocol
//T.C=o(n)
# include<iostream>
using namespace std;
int smallest_distinct_window(string s){
    int first=0,second=0;
     int n=s.size();
   int len=n;
   int dif=0;
   vector<int>count(256,0);
   for(int i=0;i<n;i++){
    count[s[i]]=1;
   }
   for(int i=0;i<256;i++){
    if(count[i]){
        dif++;
    }
   }
   vector<int>ans(dif,0);
   while(second<n){
    if(ans[s[second]]==0){
        ans[s[second]]++;
        dif--;
    }
    else if(ans[s[second]]){
        ans[s[second]]++;
    }
   }
   int sum=0;
   for(int i=0;i<dif;i++){
    sum+=ans[i];
   }
   return sum;
    


}
int main(){
    string s;
    cout<<"Enter The String: ";
    getline(cin,s);
    //function call
    cout<<smallest_distinct_window(s);
    return 0;
}