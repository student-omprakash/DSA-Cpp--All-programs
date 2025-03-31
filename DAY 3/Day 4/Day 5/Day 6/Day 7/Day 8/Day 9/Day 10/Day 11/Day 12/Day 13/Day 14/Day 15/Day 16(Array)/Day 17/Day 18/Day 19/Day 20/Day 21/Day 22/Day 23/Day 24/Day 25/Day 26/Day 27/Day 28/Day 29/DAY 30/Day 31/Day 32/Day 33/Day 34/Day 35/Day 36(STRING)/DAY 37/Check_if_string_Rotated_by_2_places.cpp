//wap to check the string is rotated by two places or not it can be clockwise as well
//as anticlockwise it is gfg problem
//T.C=o(s.size());
//s.c=o(1);

# include<iostream>
using namespace std;
void rotateclockwise(string &s1){
    char c=s1[s1.size()-1];
    int index=s1.size()-2;
    while(index>=0){
        s1[index+1]=s1[index];
        index--;
            }
            s1[0]=c;
}
void rotateanticlockwise(string &s1){
    char c=s1[0];
    int index=0;

    while(index<s1.size()){
        s1[index]=s1[index+1];
        index++;
    }
    s1[s1.size()-1]=c;

}
int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    //function for clockwise rotation
    string clockwise=s1;
    string anticlockwise=s1;
    rotateclockwise(clockwise);
    rotateclockwise(clockwise);
    if(clockwise==s2){
        cout<<"true";
    }
    
    

    rotateanticlockwise(anticlockwise);
    rotateanticlockwise(anticlockwise);
    if(anticlockwise==s2){
        cout<<"true";
    }
    else{
    
    cout<<"false";
    }
    
    
    //function for anticlockwise rotation
    return 0;
}
    
