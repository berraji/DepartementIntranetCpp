#ifndef FORMATION_HPP
#define	FORMATION_HPP
#include <string>
#include <iostream>



using namespace std;

class formation
{
	public:
		string nom;
		string type;
		string entite;
		string Duree;
		string langue_ens;
		string Diplome_requis;
		string Diplome_obtenu;
		string lieu;
		void afficher_info();
		formation()
		{
			Duree = "champs vide";
			langue_ens = "champs vide";
			Diplome_requis  ="champs vide";
			lieu = "UM6P";
		};
		formation(string , string, string, string, string ,string, string, string);

	
};




#endif
