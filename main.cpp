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

	// 課題4
	int buget{};
	int RoadLength{};
	int ConstructionFee{};

	std::cout << "手持ちの予算\n";
	std::cin >> buget;
	std::cout << "建設する道路の長さ(マス数)\n";
	std::cin >> RoadLength;
	std::cout << "1マスあたりの建設費\n";
	std::cin >> ConstructionFee;

	std::cout << "建設費の合計:" << RoadLength * ConstructionFee << "\n";
	std::cout << "建設後の残り予算:" << buget - RoadLength * ConstructionFee << "\n";
	if (buget < RoadLength * ConstructionFee) {
		std::cout << "予算が足りません\n";
	}
}