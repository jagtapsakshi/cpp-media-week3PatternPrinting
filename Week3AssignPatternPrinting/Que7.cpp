#include <iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter No of rows:";
    cin>>r;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r+1-i;j++){
            cout<<" "; 
        }
        for(int k=1;k<=r;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
