#include <iostream>
#include <windows.h>

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    std::cout << "sizeof int:" << sizeof(int) << "\n";
    std::cout << "sizeof long:" << sizeof(long) << "\n";
    std::cout << "sizeof long long:" << sizeof(long long) << "\n";
    std::cout << "sizeof int32_t:" << sizeof(std::int32_t) << "\n";
    std::cout << "sizeof int64_t:" << sizeof(std::int64_t) << "\n";
    std::cout << "sizeof size_t:" << sizeof(std::size_t) << "\n";

    long long money{ 2'000'000'000 };
    int income{ 500'000'000 };
    money = money + income;
    std::cout << "所持金: " << money << '\n';

    int budget{ 20'000 };
    int cost{ 30'000 };
    std::cout << "建設後の残り予算: " << budget - cost << '\n';

    return 0;
}