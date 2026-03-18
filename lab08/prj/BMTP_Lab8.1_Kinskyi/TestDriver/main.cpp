#include <iostream>
#include <iomanip>
#include <windows.h>
#include "ModulesKinskyi.h"

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double x, y, z;

    cout << "--- TestDriver 8.1 ---" << endl;
    cout << "Введіть x, y, z: ";
    cin >> x >> y >> z;

    cout << "Результат S: " << fixed << setprecision(4) << s_calculation(x, y, z) << endl;

    cout << "\n";
    system("pause");

    return 0;
}
