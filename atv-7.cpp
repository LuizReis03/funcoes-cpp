#include<iostream>
using namespace std;

float mediaTodasNotas(float a, float b, float c);
float duasNotas(float a, float b, float c);
int main(){
	
	float nota1 = 0;
	float nota2 = 0;
	float nota3 = 0;
	
	cout << "Digite a primeira nota: ";
	cin >> nota1; 
	cout << "Digite a segunda nota: ";
	cin >> nota2;
	cout << "Digite a terceira nota: ";
	cin >> nota3;
	
	float result1 = mediaTodasNotas(nota1, nota2, nota3);
	float result2 = duasNotas(nota1, nota2, nota3);
	
	cout << result1 << "\n";
	
	cout << result2 << "\n";
}

float mediaTodasNotas(float a, float b, float c){
	float todasMedias = (a + b + c) / 3;
	return todasMedias;
}

float duasNotas(float a, float b, float c){
	float maior = 0;
	float menor = 0;
	float medio = 0;
	 
	if(a > b && a > c){
	 	maior = a;
	 	if(b > c){
 		medio = b;
 		menor = c;
		}
	}else if(b > a && b > c){
		maior = b;
		if(c > a){
		medio = c;
		menor = a;
		}
	}
	else if(c > b && c > a){
	 	maior = c;
	 	if(a > b){
	 		medio = a;
			menor = b;	
		}
	}
	
	float result = (maior + medio) / 2;
	return result;	 
}
	
