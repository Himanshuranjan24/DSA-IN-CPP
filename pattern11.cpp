#include<iostream>
using namespace std;
int main()
    {
        int n;
        cin>>n;
        int count=1;
        int row=1;
        while(row<=n){
            int col=1;
            int value=row;
            while(col<=row){
                cout<<row-col+1<<" ";
                value=value+1;
                col=col+1;
            }
            row=row+1;
            cout<<endl;
        }
    }
