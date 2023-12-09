#include<iostream>
using namespace std;

int main(){
	int i, n, bilangan_bulat_positif= 0;
	cin>>n;
	
	for(int i = 1; i <= n; i++)
	bilangan_bulat_positif = bilangan_bulat_positif + i;
	cout<<bilangan_bulat_positif;
}
