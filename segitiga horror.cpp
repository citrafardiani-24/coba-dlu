#include<iostream>
using namespace std;

int main(){
int a;
cin>>a;
    for(int n=1; n<=a; n++){
        for(int o=a; o>n; o--){
            cout<<" ";
        }
        for(int p=1; p<=n ;p++){
                cout<<"*";
        }
        cout<<endl;
      }
      return 0;
  }
