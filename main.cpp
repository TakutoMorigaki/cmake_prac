#include <cstdint>
#include <cstddef>
#include <iostream>

#ifdef _WIN32
#include <windows.h>
#endif

bool canAfford(std::int64_t budget, std::int64_t cost){
    return budget >= cost;
}

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    std::int64_t totalPopulation{};
    int countRegion{};

    std::cout << "総人口を入力: ";
    std::cin >> totalPopulation;

    std::cout << "地区の数を入力: ";
    std::cin >> countRegion;

    if (countRegion == 0) {
        std::cout << "地区は1以上を入力してください\n";
        return 1;
    }

    std::cout << "1地区あたりの平均人口: " << static_cast<double>(totalPopulation) / countRegion << "\n";

    std::int64_t budget{};
    char decision{};
    std::int64_t parkFee{ 1500000 };

    std::cout << "所持金を入力: ";
    std::cin >> budget;

    std::cout << "建設可能:" << std::boolalpha << canAfford(budget, parkFee) << '\n';
    if (canAfford(budget, parkFee)) {
        std::cout << "建設しますか？: (y/n)";
        std::cin >> decision;
        if (decision == 'y') {
            std::cout << "建設しました。残り所持金: " << budget - parkFee << "\n";
        }
        else {
            std::cout << "建設を見送りました\n";
        }
    }
    else {
        std::cout << "資金が足りません\n";
    }

    return 0;
}