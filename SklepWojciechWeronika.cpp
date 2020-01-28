#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class ShowMenu {
public:
	//creating structure for Mail
	struct Mail{
		string name;
		string surname;
		string topic;
		string content;
	};

	//creating structure for business data
	struct organizationData {
		string seller;
		string adress;
		string NIP;
		string telephoneNumber;
	};

	struct product {
		int id;
		string name;
		int price;
		string description;
		double display;
		int RAM;
		string system;
		int memory;
		string procesor;
	};
	/* zrobić jako metode dodawania produktów
	void newProduct(int id, string name, int price, string description, double display, int ram, string system,int memory, string procesor) {

	}*/

	//showing Menu and operating on "GUI"
	ShowMenu() {
		//creating organization data 
		organizationData orgData;
		orgData.seller = "Weronika I Wojciech S.A. we wspolpracy z Gorska i Markiem";
		orgData.adress = "Kielnarowa cicha 2";
		orgData.NIP = "8596479653";
		orgData.telephoneNumber = "999333555";

		//creatig an array with max 1000 product list
		//allocated true/false | id | name | price | description | display | ram | system | memory | procesor
		string productTable[1000][10];

		//creating products for shop
		productTable[0][0] = "true";
		productTable[0][1] = "0";
		productTable[0][2] = "Samsung s9+";
		productTable[0][3] = "2800";
		productTable[0][4] = "Fajne to";
		productTable[0][5] = "6.2";
		productTable[0][6] = "6";
		productTable[0][7] = "Android 9";
		productTable[0][8] = "256";
		productTable[0][9] = "Fajny";

		//creating menu variables
		int MainMenu, MenuContact;
		string name,surname, Topic, Content,exit;
		cout << "SKLEP(1) | KOSZYK(2) | KONTAKT(3) \n\nWybierz opcje z menu ";

		//creating menu
		cin >> MainMenu;
		switch (MainMenu)
		{
		case 1:
			cout << productTable[0][1] << endl;
			cout << productTable[0][2] << endl;
			cout << productTable[0][3] << endl;
			cout << productTable[0][4] << endl;
			cout << productTable[0][5] << endl;
			cout << productTable[0][6] << endl;
			cout << productTable[0][7] << endl;
			cout << productTable[0][8] << endl;
			cout << productTable[0][9] << endl;

			cout << "Wcisnij 'q' aby wyjsc";
			exit = "null";
			cin >> exit;
			while (exit != "q")
			{
				cin >> exit;
			}
			system("cls");
			ShowMenu();
			break;

		case 2:
			cout << "Wybrano koszyk";
			break;

		case 3:
			system("cls");
			cout << "ZADZWON(1) | NAPISZ MAILA(2)\n";
			cin >> MenuContact;
			switch (MenuContact)
			{
			case 1:
				//displaying data
				cout << "Firma: " << orgData.seller <<endl;
				cout << "Adres: " << orgData.adress <<endl;
				cout << "NIP: " << orgData.NIP <<endl;
				cout << "Telefon: " << orgData.telephoneNumber <<endl;
				cout << "Wcisnij 'q' aby wrocic do menu:" << endl;
				exit = "null";
				cin >> exit;
				while (exit != "q")
				{
					cin >> exit;
				}
				system("cls");
				ShowMenu();

				break;
			case 2:
				//creating Mail message and faking sending
				Mail mail;

				cout << "Podaj Imie:";
				cin >> name;
				mail.name = name;

				cout << "Podaj Nazwisko:";
				cin >> surname;
				mail.surname = surname;

				cout << "Podaj Temat: ";
				cin >> Topic;
				mail.topic = Topic;

				cout << "Podaj Tresc Maila: ";
				cin >> Content;
				mail.content = Content;

				cout << "Dziekujemy za kontakt, zostaniesz zaraz przekierowany na stronę glowna";

				//faking sending,clearing console,deleting structures from memory
				Sleep(3000);
				system("cls");
				ShowMenu();
				break;
			}
			break;
		}
	}
};

class Shop :public ShowMenu {
	Shop() {

	}
};
int main()
{
	ShowMenu* Menu = new ShowMenu();
}