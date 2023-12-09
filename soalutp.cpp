#include <cmath>
#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//int main() {
//    int a;
//    cin>>a;
//    while(a--){
//        int n;
//        cin>>n;
//        
//        long factorial = 1;
//        for(int i = 1; i<=n; i++)
//            factorial *=i;
//            cout<<factorial<<endl;
//      
//    }
//    
//      
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main(){
//	int data[1001];
//    int angka;
//    int index = 0;
//    
//    while(cin >> angka){
//        data[index] = angka;
//        index = index+1;
//    }
//    if(index>5 || index<5){
//    	cout<<"NILAI TIDAK BISA DIJUMLAHKAN LEBIH DARI LIMA ATAU KURANG DARI LIMA";
//    	
//	}
//    int total = 0;
//    for(int i=0; i < index; i++){
//        total = total + data[i];
//    }
//    double rata_rata = (total*1.0)/index;
//    cout<<rata_rata<<endl;
//    if(rata_rata>=80){
//        cout<<"MENCAPAI TARGET";
//    }else if(rata_rata<80){
//        cout<<"TIDAK MENCAPAI TARGET";
//    }
   // return 0;
//}
//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//int main() {
//	int a, b, c, d, e;
//    long double data[5];
//    long double angka;
//    
//    
//    while(cin >> angka){
//        data[5] = angka;
//      data[5] = data[5]+1;
//       
//    int total = 0;
//    for(int i = 0;i < 5; i++){
//        total = total + data[i];
//    }
//    double rata_rata = (total*1.0)/5;
//    cout<<rata_rata;
//    if(rata_rata>=80){
//        cout<<"MENCAPAI TARGET";
//    }else if(rata_rata<80){
//        cout<<"TIDAK MENCAPAI TARGET";
//    }else{
//    	cout<<"NILAI TIDAK BISA DIJUMLAHKAN LEBIH DARI LIMA ATAU KURANG DARI LIMA";
//	}
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
    int a, b, c, d, e;
    int total;
    cin>>a>>b>>c>>d>>e;
    
    
    total = a+b+c+d+e;
    
    double rata_rata = (total*1.0)/5;
    cout<<rata_rata<<endl;
    if(rata_rata>=80){
        cout<<"MENCAPAI TARGET";
    }else if(rata_rata<80){
        cout<<"TIDAK MENCAPAI TARGET";
    }
    return 0;
}


