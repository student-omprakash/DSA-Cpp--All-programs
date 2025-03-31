//wap to find the maximum sum of the sub array in all possible sub-arrays
//T.C=o(n);
//Auxilary Space Complexity=o(1)->no extra space is or array is created
//and using KADANE'D ALGORITHM
//KADANE'D ALGORITHM->this algo says that whenever prefix sum becomes -ve than make it to zero
//here i made this program using class and constructor we can make it using function in easily
# include<iostream>
using namespace std;
//class defination
class KADANE{
    private:
    int n;
    int prefix;
    int maxi;
    int arr[1000];
    public:
    //constructor
    KADANE(){
     prefix=0;
     maxi=INT_MIN;
    }
    //set_value function
    void setvalue(){
        cin>>n;
        //int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    }
    //display_value function
    void display(){
        for(int i=0;i<n;i++){
            prefix+=arr[i];
            if(prefix<0){
                prefix=0;
            }
            maxi=max(maxi,prefix);
        }
        cout<<maxi;
    }

};
int main(){
    //create object of class
    KADANE obj;
    //acess memeber functions using objects
    obj.setvalue();
    obj.display();

    return 0;
}