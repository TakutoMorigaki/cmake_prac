#include <iostream>
#include <windows.h>

int getNumber()
{
    std::cout << "数値を入力: ";
    int x{};
    std::cin >> x;
    return x;
}

int calcTax(int population, int taxPerPerson)
{
    return population * taxPerPerson;
}

int calcDistrictIncome(int population, int taxPerPerson, int bonus)
{
    int tax{ calcTax(population, taxPerPerson) };
    return tax + bonus;
}

int calcTotal(int a, int b, int c)
{
    int total{ a };
    total = total + b;
    total = total + c;
    return total;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    std::cout << "3つの地区の人口を順に入力してください\n";
    int popA{ getNumber() };
    int popB{ getNumber() };
    int popC{ getNumber() };

    int taxPerPerson{ 3 };
    int bonus{ 100 };

    int incomeA{ calcDistrictIncome(popA, taxPerPerson, bonus) };
    int incomeB{ calcDistrictIncome(popB, taxPerPerson, bonus) };
    int incomeC{ calcDistrictIncome(popC, taxPerPerson, bonus) };   // bonus taxPerPersonの順番が逆

    std::cout << "合計税収: " << calcTotal(incomeA, incomeB, incomeC) << '\n';
    return 0;
}