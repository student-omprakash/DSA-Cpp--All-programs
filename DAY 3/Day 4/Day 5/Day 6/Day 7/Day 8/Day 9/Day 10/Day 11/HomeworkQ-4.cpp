/*Given a number n, print the corresponding month of it. 
For n=1, print Jan, n=2, print Feb..., if the user puts any invalid number,
don’t do anything. (Use switch here)
*/
# include<iostream>
using namespace std;
int main(){
    int month;
    cout<<"Enter The Month: ";
    cin>>month;
    switch(month){
        case 1:
        cout<<"Jan";
        break;
        case 2:
        cout<<"feb";
        break;
        case 3:
        cout<<"mar";
        break;
        case 4:
        cout<<"Apr";
        break;
        case 5:
        cout<<"may";
        break;
        case 6:
        cout<<"Jun";
        break;
        case 7:
        cout<<"July";
        break;
        case 8:
        cout<<"Aug";
        break;
        case 9:
        cout<<"sep";
        break;
        case 10:
        cout<<"oct";
        break;
        case 11:
        cout<<"nov";
        break;
        case 12:
        cout<<"dec";
        break;
        default:
        cout<<"Enter The Valid Month";
    }
    return 0;
}