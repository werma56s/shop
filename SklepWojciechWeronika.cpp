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

	//showing Menu and operating on "GUI"
	ShowMenu() {
		//creating organization data 
		organizationData orgData;
		orgData.seller = "Weronika I Wojciech S.A. we wspolpracy z Gorska i Markiem";
		orgData.adress = "Kielnarowa cicha 2";
		orgData.NIP = "8596479653";
		orgData.telephoneNumber = "999333555";

		//creating products for shop
		product prod;
		prod.id = 0;
		prod.name = "Samsung s9+";
		prod.price = 2800;
		prod.description = "Fajne to";
		prod.display = 6.2;
		prod.RAM = 6;
		prod.system = "Android 9";
		prod.memory = 256;
		prod.procesor = "Fajny";

		//creating menu variables
		int MainMenu, MenuContact;
		string name,surname, Topic, Content,exit;
		cout << "SKLEP(1) | KOSZYK(2) | KONTAKT(3) \n\nWybierz opcje z menu ";

		//creating menu
		cin >> MainMenu;
		switch (MainMenu)
		{
		case 1:
			cout << prod.id << endl;
			cout << prod.name << endl;
			cout << prod.price << endl;
			cout << prod.description << endl;
			cout << prod.display << endl;
			cout << prod.RAM << endl;
			cout << prod.system << endl;
			cout << prod.memory << endl;
			cout << prod.procesor << endl;

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