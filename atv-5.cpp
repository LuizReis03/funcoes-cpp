#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int dado () {
	srand(time(NULL));
	int sorteio = rand() % 6;
	
	cout << sorteio;
	
	return sorteio;
}


int main () {
	
	dado ();
	return 0;
}
