#include<iostream>
using namespace std;

int main(){

//	increament
//	post increament
//	x = 1;
//	cout<<x<<endl;
//	x++;
//	cout<<x<<endl;
//	x++;
//	cout<<x<<endl;
//	x++;
//	cout<<x<<endl;
	
//	pre increament
//	y = 1;
//	cout<<y<<endl;
//	++y;
//	cout<<y<<endl;
//	++y;
//	cout<<y<<endl;
//	++y;
//	cout<<y<<endl;
int n = 5;

    for(int i=1; i<=n;i++){
	for(int j=1;j<=n-1;j++){
		cout<<" ";
	}
	for(int k=1;k<=i;k++){
		cout<<"*";
	}
	cout<<endl;
}
return 0;
}
