#include<iostream>
using namespace std;n

int main(){
	float num1, num2, hsl;
	char operasi;
	
	cout<<"masukan salah satu operator di bawah ini : \n";
	cout<<"1. penjumlahan(+)\n2. pengurangan(-)\n3. perkalian(*)\n4. pembagian(/)\n";
	
	cout<<"masukkan angka pertama = ";
	cin>>num1;
	cout<<"masukkan angka kedua = ";
	cin>>num2;
	cout<<"masukkan operator = ";
	cin>>operasi;
	
	switch(operasi){
		case '+' :
			hsl = num1 + num2;
			break;
		case '-' :
			hsl = num1 - num2;
			break;
		case '*' :
			hsl = num1 * num2;
			break;
		case '/' :
			hsl = num1 / num2;
			break;
		default :
			cout<<"anda salah memasukan operator"<<endl;
			
	}
	cout<<" "<<num1<<operasi<<num2<<"="<<hsl<<endl;
	cout<<"hasilnya adalah = "<<hsl<<endl;
}
