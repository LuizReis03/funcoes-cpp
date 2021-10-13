#include <iostream>

using namespace std;

int validacao (int num1, int num2, int num3){

	if (num1 > num2 && num1 > num3){
		cout << num1 << "\n";
	}else if (num2 > num1 && num2 > num3){
		cout << num2 << "\n";
	}else{
		cout << num3 << "\n";
	}
}

int main() {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	
	cout << "Entre com o primeiro numero: \n";
	cin >> num1;
	
	cout << "Entre com o segundo numero: \n";
	cin >> num2;
	
	cout << "Entre com o terceiro numero: \n";
	cin >> num3;
	
	validacao (num1, num2, num3);
	return 0;
}
