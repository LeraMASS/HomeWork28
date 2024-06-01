

#include <string>


struct Tree {
	std::string fruit = "empty";
	int fruits_number = 0;
	int fruits = 0;
};

void print_tree(const Tree& T);
int full_price(const Tree& T);
int collect(const Tree& T, int num);