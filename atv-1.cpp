#include <iostream>

using namespace std;

int validacao (int numUsuario){

	if (numUsuario > 0){
		cout << "O numero e positivo";
	}else if (numUsuario == 0){
		cout << "O numero e neutro";
	}else{
		cout << "O numero e negativo";
	}
}

int main() {
	int numUsuario = 0;
	
	cout << "Entre com um numero: \n";
	cin >> numUsuario;
	
	validacao (numUsuario);
	return 0;
}
