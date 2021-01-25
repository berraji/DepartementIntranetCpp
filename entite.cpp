#include "entite.hpp"
#include "formation.hpp"

void entite::ajouter_formation(formation f)
{
	formations.push_back(f);
}

void entite::afficher_info()
{
	cout<<"Le nom :"<<nom<<endl;
	cout<<"Lieu : "<<this->campus<<endl;
	cout<<"Les formations proposees :"<<endl;
	for(int i = 0;i < formations.size();i++)
		cout<<formations.at(i).nom<<endl;
}

int entite::nombre_de_formations()
{
	return formations.size();
}

bool entite::propose_licence()
{
	for(int i = 0;i < formations.size();i++)
	{
		if(formations.at(i).type == "Licence")
			return 1;
	}
	return 0;
}

bool entite::propose_master()
{
	for(int i = 0;i < formations.size();i++)
	{
		if(formations.at(i).type == "Master")
			return 1;
	}
	return 0;
}


bool entite::propose_PhD()
{
	for(int i = 0;i < formations.size();i++)
	{
		if(formations.at(i).type == "PhD")
			return 1;
	}
	return 0;
}
