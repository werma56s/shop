#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

//Class virtual+konstruktory wieloargumetowy+Destruktor+polimorfizm
class Product
{
public:
	virtual void SHOOW() = 0;
	//czysta funkcja wirtualna
};

class Laptops :public Product
{
private:

	string name, parameter;
	float price;

public:
	//konsturktor wieloargumetowy
	Laptops(string name, string parameter, float price)
	{
		this->name = name;
		this->parameter = parameter;
		this->price = price;
	}
	virtual void SHOOW()
	{
		cout << "Nazwa: " << name << endl;
		cout << "Parametry: " << endl << parameter << endl;
		cout << "Cena: " << price << endl;
	}
};
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

		Product** tab = new Product * [3];
		tab[0] = new Laptops("Lenovo Legion Y540-17",
			"Procesor:Intel Core i7-9750H\nPamiec:8 GB\nGrafika:NVIDIA GeForce GTX 1660Ti\nTyp ekranu:Matowy, LED, IPS",
			4332.47);
		tab[1] = new Laptops("ASUS VivoBook 14 R459UA",
			"Procesor:Intel Pentium Gold 4417U\nPamiec:4 GB\nGrafika:Intel HD Graphics 610\nTyp ekranu:Matowy, LED",
			1400.20);
		tab[2] = new Laptops("Dell Inspiron 5490",
			"Procesor:Intel Core i5-10210U\nPamiec:8 GB\nGrafika:Intel UHD Graphics\nTyp ekranu:Matowy, LED, IPS",
			3002.30);

		//creating menu variables
		int MainMenu, MenuContact;
		string name,surname, Topic, Content,exit;
		cout << "SKLEP(1) | KOSZYK(2) | KONTAKT(3) \n\nWybierz opcje z menu ";

		//creating menu
		cin >> MainMenu;
		switch (MainMenu)
		{
		case 1:
			
			for (int i = 0; i < 3; i++)
			{
				cout << "_____________________________________" << endl;
				cout << "Produkt numer: " << i + 1 << endl;
				cout << "_____________________________________" << endl;
				tab[i]->SHOOW();
				cout << "/////////////////////////////////////" << endl;
				Sleep(1000);
			}

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