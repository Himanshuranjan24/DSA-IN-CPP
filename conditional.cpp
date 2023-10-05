#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a number:-";
    cin>>a;
    if(a>0){
        cout<<"it is positive number" <<endl;
    }
    else if(a<0){
        cout<<"it is negative number" <<endl;
    }
    else{
        cout <<"the number is zero" <<endl;
    }
}