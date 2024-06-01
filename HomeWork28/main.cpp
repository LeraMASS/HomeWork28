#include <iostream>
#include "Tree.hpp"



int main() {
	setlocale(0, "");
	int n;

	Tree Apple{
		"Apple",
		93,
		7
	};

	print_tree(Apple);
	std::cout << "Цена за все плоды: " << full_price(Apple) << " Руб\n";
	std::cout << "Сколько плодов хотите сорвать? -> ";
	std::cin >> n;
	if (collect(Apple, n) == 1)
		std::cout << "Ошибка!" << std::endl;
	else
		std::cout << "Сорванные плоды можно продать за " << collect(Apple, n) << std::endl;




	return 0;
}