# include<iostream>
using namespace std;
int main(){
    string s,s1;
    getline(cin,s);
    getline(cin,s1);
    //clockwise_rotation
    string clockwise=s;
    string anticlockwise=s;
    char c1=clockwise[clockwise.size()-1];
    char c2=clockwise[clockwise.size()-2];
    int index=clockwise.size()-3;
    while(index>=0){
        clockwise[index+2]=clockwise[index];
        index--;
    }
    clockwise[1]=c1;
    clockwise[0]=c2;
    if(clockwise==s1){
        cout<<"true";
    }
    else{
        cout<<"False";
    }
    //anticlockwise_rotation
    char c3=anticlockwise[0];
    char c4=anticlockwise[1];
    int index1=2;
    while(index1>anticlockwise.size()){
        anticlockwise[index1-2]=anticlockwise[index1];
        index1++;
    }
    anticlockwise[anticlockwise.size()-2]=c3;
    anticlockwise[anticlockwise.size()-1]=c4;
   
   if(anticlockwise==s1){
    cout<<"True";
   }
   else{
    cout<<"False";
   }
    
    return 0;
}