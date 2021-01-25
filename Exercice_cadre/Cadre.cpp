#include<stdio.h>
#include<iostream>
#include "Cadre.h"

cadre::cadre() {
	std::cout << "Entrez la largeur du cadre : \n";
	std::cin >> largeur;


	std::cout << "Entrez la longueur du cadre : \n";
	std::cin >> longueur;


	std::cout << "Largeur du cadre : " << largeur << "\n";
	std::cout << "Longueur du cadre : " << longueur << "\n";

	aire = (longueur * largeur);
	std::cout << "Surface du cadre : " << aire << "\n";

	perimetre = ((longueur * 2) + (largeur * 2));
	std::cout << "Perimetre du cadre : " << perimetre << "\n";

	if (longueur == largeur) {
		isCarre = true;
	}
	else {
		isCarre = false;
	};

	std::cout << "Le cadre est carre (1 = oui, 0 = non): " << isCarre << "\n";



}

cadre::~cadre() {
	std::cout << "Destruction du cadre";
}
