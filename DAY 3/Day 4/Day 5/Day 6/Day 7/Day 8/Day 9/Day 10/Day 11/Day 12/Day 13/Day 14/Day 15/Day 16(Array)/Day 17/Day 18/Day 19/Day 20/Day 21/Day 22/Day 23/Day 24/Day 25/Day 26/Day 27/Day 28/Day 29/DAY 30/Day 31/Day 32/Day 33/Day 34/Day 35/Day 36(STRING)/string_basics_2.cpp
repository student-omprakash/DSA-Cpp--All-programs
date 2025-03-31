# include<iostream>
# include<string>

using namespace std;
int main(){
    string s1;
    getline(cin,s1);
    cout<<s1<<endl;
    //to find the size of a string we will use the string_name.size();
    cout<<s1.size()<<endl;

    //space is also a character so it will also count in the length
    //ex:->s1="omp kew" output->7


    //how to append the two strings
    string str1="om";
    string str2="Kewatiya";
    cout<<str1+str2<<endl;
    //one more method using append function
    cout<<str1.append(str2)<<endl;
    //it will add at the end 'o';
    str1.push_back('o');
    cout<<str1<<endl;
    //it will remove the 'o' from the end
    str1.pop_back();
    cout<<str1;
    cout<<endl;
    //like this we can also add at the end
    cout<<str1+'p';

    cout<<endl;
    //like this we can also add string at the end of a string
    
    cout<<str1+"op";
    return 0;
}