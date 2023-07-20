#include <iostream>
using namespace std;

int main() {
	int plaka;
	cout << "Lutfen bir sehrin plakasini giriniz.";
	cin >> plaka;
	switch (plaka) {
	case 6:
		cout << "Ankara ilinin plakasi.";
	case 34:
		cout << "Istanbul ilinin plakasi.";

	case 19:
		cout << "Corum ilinini plakasi.";

	default :
		cout << "Oyle bir il plakasi yoktur.";







	}




	return 0;

}