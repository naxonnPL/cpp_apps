#include <iostream>
#include <vector>
#include <string>


struct Character {
	std::string nazwa;
	int HP;
	int lvl;
	bool isAlive;

	Character() : nazwa("none"), HP(0), lvl(0), isAlive(true) {}

	Character(const std::string& n, int h, int l) : nazwa(n), HP(h), lvl(l), isAlive(h > 0) {}
};

void karta(const Character& player) {

	std::cout << " =================\n";
	std::cout << " IMIE: " << player.nazwa;
	std::cout << "\n HP: " << player.HP << (player.isAlive ? " Alive" : " Dead");
	std::cout << "\n LVL: " << player.lvl;
	std::cout << "\n =================\n";

}



void searchplayer() {

	std::vector<Character> players = {
		{"Player1", 100, 21},
		{"Player2", 54, 25},
		{"Player3", 0, 52}
	};

	std::string decyzja;

	Character znalezionyplayer;

	bool znalezienie = false;



	std::cout << "Podaj nazwe uzytkownika: ";

	std::cin >> decyzja;

	for (const auto& p : players) {
		if (p.nazwa == decyzja) {
			znalezienie = true;
			znalezionyplayer = p;

			break;
		}
	}

	if (znalezienie) {
		karta(znalezionyplayer);
	}
	else {
		std::cout << "Nie znaleziono takiego gracza.";
	}
}
