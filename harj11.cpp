/**********************************************************
*Tehtävä: Harjoitus11
*Tekijä: Olli Kauppinen
*PVM: 08.10.2013
*Kuvaus:
*Muuta tehtävän 9 laskin-ohjelmaa niin, etta valikko nayttaa
*seuraavalta:
*
*VALIKKO
*0. Lopetus
*1. Summa
*2. Erotus
*3. Tulo
*4. Osamaara
*5. Jakojaannos
*6. Syota uudet luvut laskemista varten
*
*Laskimella on siis mahdollista käsitellä
*useita lukupareja käyttäjän toiveiden
*mukaisesti. Mita tapahtuu, jos luku2 on 0?
*HUOM! goto -lauseen käyttä on KIELLETTY!!!!
*
*
* Versio 1.0 H4718 08.10.2013
***********************************************************/

#include<iostream>
using namespace std;

int main()
{
	int luku1;
	int luku2;
	int valinta;
	int tulos;
	bool jatka = true;

	cout << "Anna kaksi lukua: \n";
	cin >> luku1;
	cin >> luku2;

	do
	{

		cout << "Ohjelman valinta: \n1. Summa\n2. Erotus\n3. Tulo\n4. Osamäärä\n5. Jakokäännös\n6. Syötä uudet luvut laskemista varten\n0. Lopetus\n";
		cin >> valinta;

		switch (valinta)
		{
			case 0:
			{
				cout << "Hyvää päivänjatkoa\n";
				jatka = false;

			}
			case 1:
			{
				tulos = luku1+luku2;
				cout << "Summa = " << tulos << endl;
				break;
			}
			case 2:
			{
				tulos = luku1-luku2;
				cout << "Erotus = " << tulos << endl;
				break;
			}
			case 3:
			{
				tulos = luku1*luku2;
				cout << "Tulo = " << tulos << endl;
				break;
			}
			case 4:
			{
				tulos = luku1/luku2;
				cout << "Osamäärä = " << tulos << endl;
				break;
			}
			case 5:
			{
				tulos = luku1%luku2;
				cout << "Jakojäännös = " << tulos << endl;
				break;
			}
			case 6:
			{
				cout << "Anna kaksi lukua: \n";
				cin >> luku1;
				cin >> luku2;
				break;
			}
			default:
			{
				cout << "\nväärä valinta\n";
				break;
			}
		}
	}
	while (jatka == true);

	cout << "\n";
}