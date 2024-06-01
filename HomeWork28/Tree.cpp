

#include "Tree.hpp"
#include <iostream>

void print_tree(const Tree& T) {
	std::cout << "�����: " << T.fruit << '\n';
	std::cout << "���-�� ������ �� ������: " << T.fruits_number << '\n';
	std::cout << "���� �� ���� ����: " << T.fruits << '\n';
}
int full_price(const Tree& T) {
	return T.fruits_number * T.fruits;
}

int collect(const Tree& T, int num) {
	if (num > T.fruits_number || num <= 0)
		return 1;
	return T.fruits * num;
}