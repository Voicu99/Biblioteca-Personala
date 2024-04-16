// Biblioteca Personala.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

// Definirea structurii pentru o carte
struct Carte {
    std::string titlu;
    std::string autor;
    int an_publicatie = 0; // Inițializare cu valoarea implicită 0
};

// Functie pentru adaugarea unei carti in biblioteca
void adaugaCarte(Carte biblioteca[], int& nr_carti) {
    std::cout << "Introduceti titlul cartii: ";
    std::getline(std::cin >> std::ws, biblioteca[nr_carti].titlu);
    std::cout << "Introduceti autorul cartii: ";
    std::getline(std::cin >> std::ws, biblioteca[nr_carti].autor);
    std::cout << "Introduceti anul publicatiei: ";
    std::cin >> biblioteca[nr_carti].an_publicatie;

    // Eliminarea caracterului nou de linie din bufferul de intrare
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    nr_carti++;
}

// Functie pentru afisarea intregii colectii de carti
void afiseazaColecție(const Carte biblioteca[], int nr_carti) {
    std::cout << "\nColectia de carti:\n";
    for (int i = 0; i < nr_carti; ++i) {
        std::cout << "Cartea " << i + 1 << ":\n";
        std::cout << "Titlu: " << biblioteca[i].titlu << std::endl;
        std::cout << "Autor: " << biblioteca[i].autor << std::endl;
        std::cout << "Anul publicatiei: " << biblioteca[i].an_publicatie << std::endl << std::endl;
    }
}

int main() {
    const int MAX_CARTI = 100; // Numarul maxim de carti in biblioteca
    Carte biblioteca[MAX_CARTI];
    int nr_carti = 0;

    // Adaugare carti in biblioteca
    adaugaCarte(biblioteca, nr_carti);
    adaugaCarte(biblioteca, nr_carti);

    // Afisare colectie de carti
    afiseazaColecție(biblioteca, nr_carti);

    return 0;
}