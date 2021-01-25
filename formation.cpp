#include "formation.hpp"


formation::formation(string n, string t, string En, string D, string l,string d_r, string d_o,string L)
{
	nom = n;
	type = t;
	entite = En;
	Duree = D;
	langue_ens = l;
	Diplome_requis = d_r;
	Diplome_obtenu = d_o;
	lieu = L;
}

void formation::afficher_info()
{
	cout<<"Ecole / Département : "<<entite<<endl;
	cout<<"Duree : "<<Duree<<endl;
	cout<<"Langue(s) d’enseignement: "<<langue_ens<<endl;
	cout<<"Diplome requis a l'entree: "<<Diplome_requis<<endl;
	cout<<"Diplome valide a la sortie: "<<Diplome_obtenu<<endl;
	cout<<"Lieu de Formation: "<<lieu<<endl;
}
