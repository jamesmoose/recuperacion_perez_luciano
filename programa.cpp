#include<iostream>
using namespace std;
void sum();
int main(){
	system("color b1");
	cout<<"hola mundo #recuperacion #salvemedelfiltro :v\n\n\n";
	sum();
	cin.get();
	return 0;
}
void sum(){
	int a,b;
	cout<<"inserta primer numero:\n";
	cin>>a;
	cout<<"inserta segundo numero:\n";
	cin>>b;
	cout<<"la suma de los dos numeros es: "<<a+b;
}
