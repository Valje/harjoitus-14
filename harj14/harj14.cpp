// Valtteri Ahonen
// Harjoitus 14
// 2.10.2013

#include <iostream> 
using namespace std; 
#include <cstring> 

int main(void) 
{ 
	char etun[50] = " ", sukun[65] = " ", osoite[35] = " ";
	int keng, posti;
	float matka;

	// Vastaanotetaan halutut tiedot
	cout << "Anna etunimesi: ";
	cin.get(etun, 50); // Tai jos halutaan pelk�ll� cin:ll� niin jokainen kysyt��n erikseen ja lopuksi yhdistet��n strcat:lla.
	cout << "Anna keng�nnumerosi: ";
	cin >> keng;
	cout << "Anna sukunimesi: ";
	cin >> sukun;
	cout << "Anna koulumatkasi pituus metrein�: ";
	cin >> matka;
	cout << "Anna osoitteesi: ";
	cin.get();
	cin.get(osoite, 35);
	cout << "Anna postinumerosi ";
	cin >> posti;

	// Tulostetaan tiedot halutussa muodossa
	cout << endl << sukun << " " << etun << endl; 
	cout << osoite << endl;
	cout << posti << endl; 
	cout << keng << " " << matka << endl << endl;

}