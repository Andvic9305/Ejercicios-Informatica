#include <iostream>
using namespace std;

int main(){
	int division,numero1,numero2;
	cout<<"Ingrese el primer numero:";
	cin>>numero1;
    cout<<"Ingrese el segundo numero:";
	cin>>numero2;
	if (numero1 == 0){
		cout<<"Error El primer numero es cero"<< endl;
	}else if  (numero2 == 0){
		cout<<"Error El segundo numero es cero"<< endl;
	}else{
		division=numero1/numero2;
		cout<<"La division es:"<<division;
	}
}



