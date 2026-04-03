#include "inventorySystem.h"
#include <iostream>


void dodajPrzedmiot(std::vector<item>& inventory, const std::string& nazwa, int rzadkosc, float waga) {
    float suma = 0.0f;
    for (const auto& i : inventory) {
        suma += i.waga;
    }

    if (suma + waga <= 50.0f) {
        item nowyPrzedmiot;
        nowyPrzedmiot.nazwa = nazwa;
        nowyPrzedmiot.rzadkosc = rzadkosc;
        nowyPrzedmiot.waga = waga;

        inventory.push_back(nowyPrzedmiot);
        std::cout << "Dodano przedmiot: " << nazwa << " (Waga: " << waga << "kg).\n";
    }
    else {
        std::cout << "Za ciezki przedmiot: " << nazwa << "! Masz juz " << suma << "kg / 50kg.\n";
    }
}

void inventory() {
    std::vector<item> inventory;

    std::cout << "--- Proba dodania przedmiotow ---\n";

    dodajPrzedmiot(inventory, "Siekiera", 3, 45.0f); //✅
    dodajPrzedmiot(inventory, "Miecz", 2, 10.0f);    //❌
    dodajPrzedmiot(inventory, "Nozyk", 1, 2.5f);     //✅

    // Sprawdzenie ile rzeczy ostatecznie jest w plecaku
    std::cout << "\nLiczba przedmiotow w ekwipunku: " << inventory.size() << std::endl;
}


