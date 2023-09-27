#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba, strzal, ile_prob=0;

int main() {
	cout << "Witaj pomyslalem sobie o liczbie 1..100" << endl;
	srand(time(NULL));
	liczba = rand() % 100 + 1;
	cout << liczba << endl;

	while (strzal!=liczba) {
		ile_prob++;
		cout << "Zgadnij jaka liczba: (to twoja" << ile_prob << "proba)" << endl;
		cin >> strzal;

		if (strzal == liczba) {
			cout << "Udalo sie! Wygrywasz w"<<ile_prob<<"probie"<< endl;
		}
		else if (strzal < liczba) {
			cout << "To za malo!" << endl;
		}
		else if (strzal > liczba) {
			cout << "To za duzo!" << endl;
		}
	}

	return 0;
}