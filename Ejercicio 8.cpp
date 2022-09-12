#include <iostream>
using namespace std;

int main(){
	double nota1,nota2,nota3,promedio;
	cout<<"Ingrese la primer nota:"<<endl;
	cin>>nota1;
	cout<<"Ingrese la segunda nota:"<<endl;
	cin>>nota2;
	cout<<"Ingrese la tercera nota:"<<endl;
	cin>>nota3;
	promedio=(nota1+nota2+nota3)/3;
	if(promedio>=7 and promedio<=10){
		cout<<"Aprobado";
	}else if(promedio>=4 and promedio<7){
		cout<<"Regular";
	}else if(promedio>=0 and promedio<4){
		cout<<"Reprobado";
	}else{
		cout<<"Nota no valida";
	}
}
