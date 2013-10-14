/**********************************************************
*Teht�v�: Harjoitus11
*Tekij�: Olli Kauppinen
*PVM: 08.10.2013
*Kuvaus:
*Muuta teht�v�n 9 laskin-ohjelmaa niin, etta valikko nayttaa
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
*Laskimella on siis mahdollista k�sitell�
*useita lukupareja k�ytt�j�n toiveiden
*mukaisesti. Mita tapahtuu, jos luku2 on 0?
*HUOM! goto -lauseen k�ytt� on KIELLETTY!!!!
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

		cout << "Ohjelman valinta: \n1. Summa\n2. Erotus\n3. Tulo\n4. Osam��r�\n5. Jakok��nn�s\n6. Sy�t� uudet luvut laskemista varten\n0. Lopetus\n";
		cin >> valinta;

		switch (valinta)
		{
			case 0:
			{
				cout << "Hyv�� p�iv�njatkoa\n";
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
				cout << "Osam��r� = " << tulos << endl;
				break;
			}
			case 5:
			{
				tulos = luku1%luku2;
				cout << "Jakoj��nn�s = " << tulos << endl;
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
				cout << "\nv��r� valinta\n";
				break;
			}
		}
	}
	while (jatka == true);

	cout << "\n";
}