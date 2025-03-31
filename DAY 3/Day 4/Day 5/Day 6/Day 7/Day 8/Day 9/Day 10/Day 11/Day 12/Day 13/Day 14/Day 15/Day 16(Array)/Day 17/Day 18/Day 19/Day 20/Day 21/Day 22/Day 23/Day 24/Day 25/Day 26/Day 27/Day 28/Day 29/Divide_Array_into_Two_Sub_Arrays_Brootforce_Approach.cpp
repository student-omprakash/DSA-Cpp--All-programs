//wap to divide an array into two sub arrays that sum of both sub arrays are equal
//if that is possible than return 1 else return 0
//Ex:-arr=[3,4,-1,5,8,20,-10,8] so here sum ofarr1=[3,4,-1,5,8]=18 and 
//sum of arr2=[20,-10,8]=18 both are equal so output should be 1
//Brootforce_Approach ->T.C=o(n^2);
# include<iostream>
using namespace std;
bool Divide_into_Sub_Arrays(int n,int arr[]){
    for(int i=0;i<n-1;i++){
        int sum1=0,sum2=0;
        //loop for first arrays sum
        for(int j=0;j<=i;j++){
            sum1+=arr[j];
        }
        //loop for second arryas sum
        for(int k=i+1;k<n;k++){
            sum2+=arr[k];
        }
        //checking condition that sum of both the arrays are equal or not
        if(sum1==sum2) return 1;
    }
   return 0;
}
int main()
{
    int n;
    cout<<"Enter The Size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter The Elements of Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //function call
    cout<<Divide_into_Sub_Arrays(n,arr);

    return 0;
    
} 



