#include <iostream>
using namespace std;
int main(){
	int bil1,bil2,bil3,hasil;
	char ope;
	cout<<"Masukan angka pertama yang ingin kamu tampilkan =";
	cin>>bil1;
	cout<<"Masukan angka kedua yang ingin kamu tampilkan =";
	cin>>bil2;
	cout<<"Masuka angka ketiga yang ingin kamu tampilkan =";
	cin>>bil3;
	cout<<endl;
	cout<<"Masukan simbol kalkulator yang akan anda pakai(*,+,-,/,%)=";
	cin>>ope;
	
	if(ope=='+'){
		hasil=bil1 + bil2 + bil3;
		cout<<"anda berhasil";
	}else if(ope=='-'){
		hasil=bil1 - bil2 - bil3;
		cout<<"anda berhasil";
	}else if(ope=='*'){
		hasil=bil1 * bil2 * bil3;
		cout<<"anda berhasil";
	}else if(ope=='/'){
		hasil=bil1 / bil3;
		cout<<"anda berhasil";
	}else if(ope=='%'){
		hasil=bil3 % bil1;
		cout<<"anda berhasil";
	}else{
		cout<<"operator atau bilangan yang anda masukan salah, silahkan coba lagi!";
		
	}
	cout<<endl;
	cout<<"hasilnya merupakan="<<hasil;
	cout<<endl;
	cout<<"Terima Kasih"<<endl;
	
	return 0;
}
