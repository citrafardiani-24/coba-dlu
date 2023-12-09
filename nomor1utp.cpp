//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//int main() {
//    int a;
//    cin>>a;
//    if(a==5){
//        float a, b, c, d, e;
//        cin>>a>>b>>c>>d>>e;
//        float hasil = a+b+c+d+e;
//        hasil = hasil/a;
//        
//        if(hasil >= 80){
//            cout << hasil << endl <<"MENCAPAI TARGET";
//        }else if(hasil < 80){
//            cout << hasil << endl <<"TIDAK MENCAPAI TARGET";
//        }else{
//            cout<<"NILAI TIDAK BISA DIJUMLAHKAN LEBIH DARI LIMA ATAU KURANG DARI LIMA";
//        }
//    
//    
//    return 0;
//}
//}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int bilangan;
    int data[1000]={0};
    int jumlah = 0;
    int modus = 0;
    
    while(cin>>bilangan){
        data[bilangan]++;
    }for(int i =0; i<1000; i++){
        if(data[i]>=jumlah){
            jumlah = data[i];
            modus = i;
        }
    }
    cout<<modus<<endl;
    return 0;
}

