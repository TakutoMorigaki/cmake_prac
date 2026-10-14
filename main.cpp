#include <iostream>
#include <windows.h>

//#define ENABLE_DEBUG

int getNumber()
{
    std::cout << "数値を入力: ";
    int x{};
    std::cin >> x;
    return x;
}

int calcTaxIncome(int population, int taxPerPerson)
{
    return population * taxPerPerson;
}

int calcMaintenance(int roadLength, int costPerMeter)
{
    int total{ roadLength * costPerMeter };
    return total;
}

int calcBalance(int income, int maintenance)
{
    return income - maintenance;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    std::cout << "人口、1人あたりの税、道路の長さ、1mあたりの維持費を順に入力してください\n";
    int population{ getNumber() };
    int taxPerPerson{ getNumber() };
    int roadLength{ getNumber() };
    int costPerMeter{ getNumber() };

    int income{ calcTaxIncome(population, taxPerPerson) };
#ifdef ENABLE_DEBUG
std::cerr << income << "\n";
#endif // ENABLE_DEBUG
    int maintenance{ calcMaintenance(roadLength, costPerMeter) };
#ifdef ENABLE_DEBUG
std::cerr << maintenance << "\n";
#endif // ENABLE_DEBUG

    std::cout << "収支: " << calcBalance(income, maintenance) << '\n';
    return 0;
}