#include <iostream>
using namespace std;

int main(){
	int numero1,numero2,numero3;
	cout<<"Ingrese la primer numero:"<<endl;
	cin>>numero1;
	cout<<"Ingrese la segunda numero:"<<endl;
	cin>>numero2;
	cout<<"Ingrese la tercera numero:"<<endl;
	cin>>numero3;

	if(numero1>numero2 && numero1>numero3){
		cout<<"El numero mayor es: "<<numero1<<endl;
	}else if(numero2>numero1 && numero2>numero3){
		cout<<"El numero mayor es: "<<numero2<<endl;
	}else if(numero3>numero1 && numero3>numero2){
		cout<<"El numero mayor es: "<<numero3<<endl;
	}else{
		cout<<"Los numeros son iguales";
	}
}
