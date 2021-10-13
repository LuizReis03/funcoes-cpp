#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int dado () {
	srand(time(NULL));
	int sorteio = rand() % 100000;
	
	cout << sorteio;
	
}


int main () {
	
	dado ();
	return 0;
}
