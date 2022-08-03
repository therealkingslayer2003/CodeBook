#include "MainHeader.h"
int main()
{
	SetConsoleCP(1251);                 //Встановлення підтримки української мови
	SetConsoleOutputCP(1251);

	vector<Ingredient> KulinarBook;
	
	int index = 0;
	Menu mainmenu;				//Меню

	mainmenu.showmenu();

	while (index != 3) {
		if (index == 0) {
			mainmenu.basemenu(); cin >> index;
		}
		if (index == 1) {
			try {
				if (KulinarBook.size() == 0) { throw KulinarBook.size(); break; }
				for (int i = 0; i < KulinarBook.size(); i++) {
					cout << KulinarBook[i] << endl;
				}
			}
			catch (...) {
				cout << "!Кулінарна книга порожня\n\n"; 
			}
			index = 0;
		}
		else if (index == 2) {
			system("cls");
			int answer; cout << "Скільки інгрідієнтів в одному рецепті?\t"; cin >> answer;
			cout << "!Новий(-і) рецепт(-и) в 'CodeCook'\n"<<endl;
			Reciepe Reciepes(answer);
			for (int i = 0; i < Reciepes.GetSize(); i++) {
				cin >> Reciepes[i]; cout << "Цей рецепт обійдеться вам в " << Reciepes[i].GetCost(); KulinarBook.push_back(Reciepes[i]);
			}
			
			cout << "\n\nІнформація успішно введена!" << endl; index = 0;
		}
		else if (index == 3) {
			cout << "!Тестування всіх операцій та конструкторів,що не входять до програмної системи" << endl;
			Product product1("Слива",20);
			Product product2(product1);
			Product product3; product3 = product2;
			cout << product1 << endl << product2 << endl << product3 << endl;
			cout << "Збільшення ціни на сливу, нова ціна: " << product1 + 30 << endl;
			cout << "Зменшення ціни на сливу, нова ціна: " << product1 - 10 << endl;
			Ingredient ingredient1("Мед", 20 , 30);
			Ingredient ingredient2(ingredient1);
			Ingredient ingredient3; ingredient3 = ingredient2;
			cout << ingredient1 << endl << ingredient2 << endl << ingredient3 << endl;
			cout << "Збільшення дозування меду, нове дозування: " << ingredient1 + 30 << endl;
			cout << "Зменшення дозування меду, нове дозування: " << ingredient1 - 10 << endl;
			
			cout << "\n\nПоліморфічний кластер" << endl;
			Printer printer;

			Product* polimorph[2] = { &product3,&ingredient3 };
			for (int i = 0; i < 2; i++) {
				printer.ToPrint(polimorph[i]);
			}
			cout << endl << "Всі операції та конструктори працюють корректно" << endl;
			index = 0;
		}
		else if (index == 4) { break; }
		else { cout << "Такого пункту не існує , спробуйте ще" << endl; index = 0; }
	}
}