# include<iostream>
using namespace std;
vector<int>large_factorials(int n){
    //create a vector to store the answer
    vector<int>ans(1,1);
    int carry=0,res,size=ans.size();
    //loop 
    while(n>1){
        for(int i=0;i<size;i++){
            //resultant value;
            res=ans[i]*n+carry;
            //next carry
            carry=res/10;
            ans[i]=res%10;
        }
        while(carry){
            ans.push_back(carry%10);
            carry/=10;
        }
         size = ans.size();
        n--;
    }
    reverse(ans.begin(),ans.end());
    return ans;


}
int main(){
    int n;
    cout<<"Enter The Number:";
    cin>>n;
    //function call
    vector<int>final=large_factorials(n);
    for(int i=0;i<final.size();i++){
        cout<<final[i];
    }
}
