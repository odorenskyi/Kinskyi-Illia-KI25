#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include "ModulesKinskyi.h"

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double x, y, z;
    char a, b;

    cout << "Введіть x, y, z: ";
    cin >> x >> y >> z;
    cout << "Введіть a, b: ";
    cin >> a >> b;

    cout << "\n===============================" << endl;

    // Вивід автора (Твоє прізвище)
    cout << "Автор: Кінський І. \xC2\xA9" << endl;

    // Перевірка умови та вивід true/false
    bool condition = (a + 7) < std::abs(b - 5);
    cout << "Умова: " << boolalpha << condition << endl;

    // Вивід у Hex-форматі
    cout << "Hex: x=" << hex << (int)x
         << ", y=" << (int)y
         << ", z=" << (int)z << dec << endl;

    // Вивід результату обчислення формули з бібліотеки 8.1
    cout << "S: " << fixed << setprecision(4) << s_calculation(x, y, z) << endl;

    cout << "===============================" << endl;

    cout << "\n";
    system("pause");
    return 0;
}
