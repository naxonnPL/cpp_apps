#include <iostream>


void inventory();
void walka();
void searchplayer();

int main() {
    std::cout << "=== LAUNCHER===\n";
    std::cout << "1. Ekwipunek\n2. Walka\n3. Szukaj\nWybor: ";
    int x;
    std::cin >> x;

    if (x == 1) inventory();
    else if (x == 2) walka();
    else if (x == 3) searchplayer();

    return 0;
}