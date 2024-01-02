#include <iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter No of rows:";
    cin>>r;
   
    for(int i=1;i<=r;i++){  
        for(int j=1;j<=i;j++){
            if(i%2==0){
            char a = (int)(j+64);
            cout<<a<<" ";} 
            else 
            {cout<<j<<" ";}

        }
        cout<<endl;
    }
}

