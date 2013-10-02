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
	cin.get(etun, 50); // Tai jos halutaan pelkällä cin:llä niin jokainen kysytään erikseen ja lopuksi yhdistetään strcat:lla.
	cout << "Anna kengännumerosi: ";
	cin >> keng;
	cout << "Anna sukunimesi: ";
	cin >> sukun;
	cout << "Anna koulumatkasi pituus metreinä: ";
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