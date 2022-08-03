#include "Menu.h"
#include "Header.h"
void Menu::showmenu()
{
	system("Color 30");
	cout << "{Програмна кулінарна книга 'CodeCook'}" << endl;
	cout << "Доброго дня, оберіть потрібний пункт меню" << endl;
}
void Menu::basemenu() {
	cout << "1.Рецепти кулінарної книги" << endl;
	cout << "2.Додати рецепт" << endl;
	cout << "3.Меню тестування" << endl;
	cout << "4.Завершення роботи" << endl;
}