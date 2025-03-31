//wap to sort the sentence according ->leetcode(1859)
//to given their position of each word in the sentence
//Ex:->input:-"is2 Sentence4 This1 a3"->out:->"This is a Sentence"
//T.C=,s.c=
# include<iostream>
using namespace std;
string sort_sentence(string&s){
    //create an ans string that will return ans sorted string
    int index=0,count=0;
    string temp;
    //create a vector that will strore the string type values
    vector<string>ans(10);
    while(index<s.size()){
        if(s[index]==' '){
            //first store the positiuon
            int pos=temp[temp.size()-1]-'0';
            //then remove the postion from the word
            temp.pop_back();
            //store in the vector
            ans[pos]=temp;

            //clear the temproary string
            temp.clear();
            count++;

        }
        else{
            temp+=s[index];
            //count++;

        }
        index++;
    }
    //at the last i dont have any space so that case i have to handle
    //first store the positiuon
            int pos=temp[temp.size()-1]-'0';
            //then remove the postion from the word
            temp.pop_back();
            //store in the vector
            ans[pos]=temp;

            //clear the temproary string
            temp.clear();
            count++;
     //now display the vector ans in screen
     for(int i=0;i<=count;i++){
        temp+=ans[i];
        temp+=' ';

     } 
     temp.pop_back();
     return temp;

}
int main(){
    string s;
    cout<<"Enter The Sentence: ";
    getline(cin,s);
    //function_call
    cout<<sort_sentence(s);
    
    return 0;
}