#include <iostream>
#include <cmath>
using namespace std;

int equacao (int a, int b, int c){

	float delta = (b*b) - (4*a*c);
	
	float num1 = (-b - sqrt(delta)) / (2 * 4);
	
	float num2 = (-b + sqrt(delta)) / (2 * 4);
	
	cout << num1 << "\n";
	cout << num2 << "\n";
}

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	
	cout << "Entre com um numero positivo: \n";
	cin >> a;
	
	cout << "Entre com um numero negativo: \n";
	cin >> b;
	
	cout << "Entre com um numero negativo: \n";
	cin >> c;
	
	equacao (a, b, c);
	return 0;
}
