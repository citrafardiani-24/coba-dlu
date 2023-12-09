#include<iostream>
using namespace std;

int main(){
	

	string nama, npm; int num1, num2, hasil;
	
	 cout << "Inputkan nama : "; 
	 getline(cin, nama);
	 cout << "Inputkan NPM : ";
	 getline(cin, npm);
	
	cout << "\nInputkan angka pertama : ";
 	cin >> num1;
 	cout << "Inputkan angka kedua : ";
    cin >> num2;
 	hasil = num1 * num2;
 	
 	cout << "Hasil kali dari " <<num1<< " dan " <<num2<< " adalah " <<hasil;
	
	return 0;
	
}
