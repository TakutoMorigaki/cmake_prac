#ifdef _WIN32
#define NOMINMAX
#include <windows.h>
#endif
#include <iostream>

int main() {
#ifdef _WIN32
	SetConsoleOutputCP(CP_UTF8);
#endif
	// 課題1
	int x{}, y{};
	std::cout << "input 2 integer\n";
	std::cin >> x >> y;
	std::cout << "和" << x + y << '\n';
	std::cout << "積" << x * y << '\n';

	// 課題2
	int population{};
	int tax{};
	std::cout << "input population\n";
	std::cin >> population;
	std::cout << "input tax\n";
	std::cin >> tax;
	std::cout << "この街の税収は" << population * tax << "です\n";

	// 課題3
	//int test{ 3.2 };
}