#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        
        long faktorial = 1;
        for(int i = 1; i<= n; i++){
            faktorial *= 1;
        }
        cout<<faktorial<<endl;
    }
    return 0;
}
