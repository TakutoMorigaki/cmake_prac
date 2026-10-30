#include <cstdint>
#include <cstddef>
#include <iostream>
#include <bitset>

#ifdef _WIN32
#include <windows.h>
#endif

int getNumberFromUser() {
    int input{};
    std::cin >> input;
    return input;
}

int computeCost(int cost, int count) {
    return cost * count;
}

int computeTax(int cost, double tax) {
    return static_cast<int>(cost + cost * tax);
}

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    constexpr int roadCost{ 3000 };
    constexpr int parkCost{ 12000 };
    constexpr double tax{ 0.1 };

    std::cout << "道路の本数を入力してください:";
    const int roadCount{ getNumberFromUser() };

    std::cout << "公園の数を入力してください:";
    const int parkCount{ getNumberFromUser() };

    const int totalCost{ computeCost(roadCost, roadCount) + computeCost(parkCost, parkCount) };

    std::cout << "建設費（税抜き）:" << totalCost << "\n";
    std::cout << "建設費（税込み）:" << computeTax(totalCost, tax) << "\n";

    constexpr int infra{ 0b0000'0101 };

    std::cout << "インフラ（2進数）:" << std::bitset<8>{ infra } << "\n";
    std::cout << "インフラ（16進数）:" << std::hex << infra << "\n";
    std::cout << std::dec;

    return 0;
}