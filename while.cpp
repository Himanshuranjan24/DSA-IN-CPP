#include<iostream>
using namespace std;
int main(){
    int n;
    int i =1;
    int sum=0;
    cout<<"enter a number:-"<<endl;
    cin>>n;
    while(i<=n){
        sum=sum+i;
        i=i+1;
        }
        cout<<"the sum is:-"<< sum <<endl;
}
