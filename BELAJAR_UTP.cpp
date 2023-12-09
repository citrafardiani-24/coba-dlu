//#include <iostream>
//using namespace std;
//
//int main() {
//    int ukuran_data; 
//    cout<<"MASUKAN UKURAN DATA : ";
//    cin>>ukuran_data;
//    int data[ukuran_data];
//    for(int i=0;i<ukuran_data;i=i+1){
//        cout<<"MASUKAN NILAI DATA KE "<<i<<" : ";
//        cin>>data[i];
//    }
//    
//    for(int i=0;i<ukuran_data;i=i+1){
//        cout<<data[i]<<' ';
//    }
//    
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{   
//    int data[1001];
//    int angka;
//    int index = 0;
//    while(cin>>angka){
//        data[index] = angka;
//        index = index+1;
//    }
//    // index ke 0 - index terakhir
//    // index terakhir - index ke 0
//    for(int i=index-1;i>=0;i--){
//        cout<<data[i]<<' ';
//    }
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{   
//    int data[1001];
//    int angka;
//    int index = 0;
//    while(cin>>angka){
//        data[index] = angka;
//        index = index+1;
//    }
//    int total = 0;
//    for(int i=0;i<index;i++){
//        total = total+data[i];
//    }
//    
//    double rata_rata = (total*1.0)/index;
//    cout<<rata_rata;
//    // jumlah data / banyak data
//    // index ke 0 - index terakhir
//   
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main(){
//
//// nilai dari data itu maksimal 1000;
//   int banyak_muncul[1005]={0};
//   int n,x; cin>>n>>x;
//   for(int i=0;i<n;i++){
//       int angka; cin>>angka;
//       banyak_muncul[angka]+=1;
//   }
//   cout<<banyak_muncul[x];
//    return 0;
//}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


//int main() {
//    int operasi;
//    cin>>operasi;
//    float a, b;
//    cin>> a>> b;
//    
//    if(a<0 || b <0){
//        cout<<"NEGATIVE ERROR";
//    }else if(operasi == 1){
//        cout<<a+b;
//    }else if(operasi == 2){
//        cout<<a-b;
//    }else if(operasi == 3){
//        cout<<a/b;
//    }else if(operasi == 4){
//        cout<<a*b;
//    }else{
//        cout<<"ERROR";
//    }
//    return 0;
//}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a = 11;
    cin>>a;
int k = 3;
    cin>>k;
    for(int i=1; i<=a; i++){
        if(i%k==0){
            cout<<'*';
        }else{
            cout<<i;
        }
        cout<<' ';
    }
    return 0;
}

