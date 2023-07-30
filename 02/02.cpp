#include"Leaver.h"

int main()
{
	std::system("chcp 1251");

	Leaver* l = new Leaver();

	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	l->leave(name);
	std::system("pause");
	return 0;
}