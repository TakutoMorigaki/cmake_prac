#include <cstdint>
#include <cstddef>
#include <iostream>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int totalPopulation{};
    int countRegion{};

    std::cout << "総人口を入力: ";
    std::cin >> totalPopulation;
    std::cout << "地区の数を入力: ";
    std::cin >> countRegion;
    std::cout << "1地区あたりの平均人口: " << static_cast<double>(totalPopulation) / countRegion << "\n";

    int budget{};
    char decision{};
    int parkFee{ 1500000 };

    std::cout << "所持金を入力: ";
    std::cin >> budget;

    std::cout << "建築可能: ";
    if (budget > parkFee) {
        std::cout << "true\n";
        std::cout << "建設しますか？ {y/n}: ";
        std::cin >> decision;
        if (decision == 'y') {
            std::cout << "建設しました。残りの所持金:" << budget - parkFee << "\n";
        }
        else {
            std::cout << "建設を見送りました";
        }
    }
    else {
        std::cout << "資金が足りません";
    }

    return 0;
}