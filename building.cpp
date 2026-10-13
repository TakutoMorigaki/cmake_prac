#include <iostream>
#include "building.h"

int getNumberFromUser() {
	int input{};
	std::cout << "数値を入力してください\n";
	std::cin >> input;
	return input;
}

void printBuildingCost(int count) {
	std::cout << "建設費用:" << count * 250 << '\n';
}