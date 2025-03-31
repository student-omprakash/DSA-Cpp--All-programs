# include<iostream>
# include<vector>
using namespace std;
int main(){
    //declare vector
   vector<int>a;
   vector<int>a1(5,1);
   //size and capacity
   cout<<"size of the v: "<<a.size()<<endl;
   cout<<"Capacity of the v: "<<a.capacity()<<endl;
   a.push_back(2);
   a.push_back(3);
   a.push_back(4);
   cout<<"size of the v: "<<a.size()<<endl;
   cout<<"Capacity of the v: "<<a.capacity()<<endl;
   //update the value in vector
   a[1]=5;
   cout<<"size of the v: "<<a1.size()<<endl;
   cout<<"Capacity of the v: "<<a1.capacity()<<endl;
   a1.push_back(2);
   cout<<"size of the v: "<<a1.size()<<endl;
   cout<<"Capacity of the v: "<<a1.capacity()<<endl;
   //Delete value from vector
   vector<int>vnew;
   vnew.push_back(2);
   vnew.push_back(12);
   vnew.push_back(21);
   vnew.push_back(23);
   vnew.push_back(42);
   vnew.pop_back();
   cout<<"size of the vnew: "<<vnew.size()<<endl;
   cout<<"Capacity of the vnew: "<<vnew.capacity()<<endl;
   //if we want to remove element at specific index
   vnew.erase(vnew.begin()+1);
   for(int i=0;i<vnew.size();i++){
    cout<<vnew[i]<<" ";
   }
   cout<<endl;
   //insert element at particular index in vector
   vnew.insert(vnew.begin()+1,50);
   for(int i=0;i<vnew.size();i++){
    cout<<vnew[i]<<" ";
   }
   //updation of value in array
   vnew[1]=34;
   cout<<endl;
   for(int i=0;i<vnew.size();i++){
    cout<<vnew[i]<<" ";
   }
   //remove all the elements
   cout<<endl;
   vnew.clear();
   cout<<"size of the vnew: "<<vnew.size()<<endl;
   cout<<"Capacity of the vnew: "<<vnew.capacity()<<endl;
   //printing first and last element of a vector
   vector<int>v;
   v.push_back(3);
   v.push_back(23);
   v.push_back(31);
   v.push_back(453);
   v.push_back(53);
   cout<<v.front()<<endl;
   cout<<v.back();
   cout<<endl;
   //copy values of one vector to the another vector
   vector<int>arr;
   arr=v;
   cout<<arr.size();
   cout<<endl;
   //new method to print the elements of array
   for(auto it=arr.begin();it!=arr.end();it++){
    cout<<*it<<" ";
   }
   cout<<endl;
   //another method to print the vector
   for(auto i: arr){
    cout<<i<<" ";
   }
   cout<<endl;
   //sort in increasing order of vector
   sort(arr.begin(),arr.end());
   for(auto it=arr.begin();it!=arr.end();it++){
    cout<<*it<<" ";
   }
   cout<<endl;
   //sort in decreasing order of vector
   sort(arr.begin(),arr.end(),greater<int>());
   for(auto it=arr.begin();it!=arr.end();it++){
    cout<<*it<<" ";
   }
   cout<<endl;
   //another way to sort array in decreasing order
   sort(arr.rbegin(),arr.rend());
   for(auto it=arr.begin();it!=arr.end();it++){
    cout<<*it<<" ";
   }
   cout<<endl;
   //searching in vector binary_search
   //it will tell us element that we want to search is present or not
   // in vector if yes than it will print 1 else it will print 0
   cout<<binary_search(arr.begin(),arr.end(),31)<<endl;
   //find index of searching element in vector
   cout<<find(arr.begin(),arr.end(),31) - arr.begin()<<endl;
   //find max and min in vector
   //int maximum=max_element(arr.begin(),arr.end());
   return 0;
}