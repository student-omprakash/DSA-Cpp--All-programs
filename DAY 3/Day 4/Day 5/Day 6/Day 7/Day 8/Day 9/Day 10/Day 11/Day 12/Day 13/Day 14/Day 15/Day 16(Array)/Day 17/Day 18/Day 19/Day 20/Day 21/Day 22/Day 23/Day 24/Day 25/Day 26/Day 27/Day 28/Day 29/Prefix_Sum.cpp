// # include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter The Size Of Array: ";
//     cin>>n;
//     //array declare
//     int arr[n];
//     //array elements as input
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     //declare vector for prefix sum
//     vector<int>prefix(n);
//     for(int i=1;i<n;i++){
//         prefix[0]=arr[0];
//         prefix[i]=prefix[i-1]+arr[i];
//     }
//     //prefix array or vector as output
//     for(int i=0;i<n;i++){
//         cout<<prefix[i]<<" ";
//     }
//     return 0;
// }



# include<iostream>
# include<math.h>
using namespace std;
class Kadanes{
    private:
    int *arr;
    int size;
    public:
    void get_data(int n){
        size=n;
        arr=new int[size];
        for(int i=0;i<size;i++){
            cin>>*(arr+i);
        }
    }
    int largest_sub_array(){
        int maxi=INT_MIN;
        int prefix_sum=0;
        for(int i=0;i<size;i++){
          prefix_sum+=*(arr+i);
          maxi=max(maxi,prefix_sum);
          if(prefix_sum<0){
            prefix_sum=0;
          }
        }
        return maxi;
    }
    ~Kadanes(){
        delete[] arr;
    }

};
int main(){
    int n;
    cout<<"Enter The Size Of Array: ";
    cin>>n;
    Kadanes obj;
    obj.get_data(n);
    cout<<obj.largest_sub_array();
    return 0;
}