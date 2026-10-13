#ifdef _WIN32
#define NOMINMAX
#include <windows.h>
#endif
#include <iostream>

int getNumberFromUser() {
	int x{};
	std::cout << "数値を入力してください\n";
	std::cin >> x;
	return x;
}

void printBuildingCost(int count) {
	std::cout << "建設費用:" << count * 250 << '\n';
}

int main() {
#ifdef _WIN32
	SetConsoleOutputCP(CP_UTF8);
#endif

	//int c = { getNumberFromUser() };
	//printBuildingCost(c);
	printBuildingCost(getNumberFromUser());
}