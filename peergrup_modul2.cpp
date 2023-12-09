#include <iostream>
using namespace std;

int main(){
	char ulangi = 'y';
	int counter = 0;
	
	do{
		cout<<"Apakah kamu sayang dia ? : ";
		cin>>ulangi;
		
		counter++;
	}while(ulangi == 'y');
	cout<<"\n---------------\n";
	cout<<"Kamu masih punya harapan!"<<endl;
	cout<<"Setidaknya kamu sudah mencoba sebanyak "<<counter<<" kali"<<endl;
	
	cout<<"\n---------------\n";
	cout<<endl;
	
	int matrix[8][8] = {{11, 12, 13, 14, 15, 16, 17, 18}, {19, 20, 21, 22, 23, 24, 25, 26}, {27, 28, 29, 30, 31, 32, 33, 34}, {35, 36, 37, 38, 39, 30, 31, 32}, {33, 34, 35, 36, 37, 38, 39, 40}, {41, 42, 43, 44, 45, 46, 47, 48}, {49, 50, 51, 52, 53, 54, 55, 56}, {57, 58, 59, 60, 61, 62, 63, 64} };

for (int i = 0; i < 8; i++){
	for (int j = 0; j < 8; j++){
		cout << matrix[i][j] << " ";
		}	
		cout << endl;
	}
	
	return 0;
}

