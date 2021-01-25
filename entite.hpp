#ifndef ENTITE_HPP
#define ENTITE_HPP
#include <iostream>
#include <string>
#include <vector>
#include "formation.hpp"


using namespace std ;


class entite
{
	public:
		string campus;
		vector<formation> formations;
		string nom;
    		entite()
		{
			campus = "UM6P";
		}
		entite(vector<formation> f, string n, string c)
		{
			formations = f;
			nom = n;
			campus = c;
		}
		void afficher_info();
    		vector<formation> formations_de_l_entite();
    		int nombre_de_formations() ;
    		bool propose_licence() ;
    		bool propose_master() ;
    		bool propose_PhD() ;
		void ajouter_formation(formation);
};
#endif


