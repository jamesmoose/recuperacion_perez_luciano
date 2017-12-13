#include<iostream>
using namespace std;
void sum();
long double factorial(int n);
int main(){
	int n;
	system("color b1");
	cout<<"hola mundo #recuperacion #salvemedelfiltro :v\n\n\n";
	sum();
	cout<<"\n\ninserte numero: \n";
	cin>>n;
	cout<<"\nel factorial de "<<n<<" es "<<factorial(n);
	
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
long double factorial(int n){
    long double fact;
    if (n==0)
        return 1;
    else
         return n*factorial(n-1);
}
