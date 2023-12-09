#include<iostream>
using namespace std;

int main() {
    int b;
    cin>>b;
    while(b--){
        int n;
        cin>>n;
        
        long f=1;
    for(int i=1;i<=n;i++){
           f *=i;
    }
        cout<<f<<endl;
    }
	return 0;
	
}
