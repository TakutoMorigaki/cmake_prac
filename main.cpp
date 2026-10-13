#ifdef _WIN32
#define NOMINMAX
#include <windows.h>
#endif

#include "building.h"

int main() {
#ifdef _WIN32
	SetConsoleOutputCP(CP_UTF8);
#endif
	printBuildingCost(getNumberFromUser());
}