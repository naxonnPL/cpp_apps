									// 24.03.2026
#include <iostream>
#include <ctime>
#include <cstdlib>

void ruchGracza(int& hpBossa, int& hpGracza) {
	int randomATT, randomHEAL, decyzja;

	for (int i = 0; i < 5; i++) {
		randomATT = rand() % 11 + 15;
	}

	for (int i = 0; i < 5; i++) {
		randomHEAL = rand() % 11 + 10;
	}

	std::cout << "[1] Atak\n[2] Leczenie\n\nDecyzja: ";
	std::cin >> decyzja;

	if (decyzja == 1) {
		hpBossa -= randomATT;
		std::cout << "\nAtakujesz!: -" << randomATT << "HP.\nZostalo mu: " << hpBossa << " HP.\n";
	}

	else if (decyzja == 2) {
		hpGracza += randomHEAL;
		std::cout << "\nLeczysz sie!: +" << hpGracza << " HP\n";
	}

	else {
		std::cout << "\nNieprawidlowy napis. Zmarnowany ruch.\n";
	}


}


void ruchNPC(int& hpBossa, int& hpGracza) {
	int randomATT, randomHEAL, decyzja;
	for (int i = 0; i < 5; i++) {
		randomATT = rand() % 11 + 15;
	}

	for (int i = 0; i < 5; i++) {
		randomHEAL = rand() % 11 + 10;
	}

	if (randomATT > 20) {

		hpGracza -= randomATT;
		std::cout << "NPC atakuje! -" << randomATT << " HP. " << "\nHP Gracza : " << hpGracza << std::endl;
	}
	else {
		hpBossa += randomHEAL;
		std::cout << "NPC sie leczy! " << hpBossa << " HP\n";
	}

}
void walka() {

	int hpGracza = 100, hpBossa = 150, decyzja = 0, random;

	srand(time(NULL));


	while (true) {

		ruchGracza(hpBossa, hpGracza);
		ruchNPC(hpBossa, hpGracza);

		if (hpBossa <= 0) {
			std::cout << "Wygrales!\n";
			break;
		}
		if (hpGracza <= 0) {
			std::cout << "Przegrales!\n";

			break;
		}
	}
}