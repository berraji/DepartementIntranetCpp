#include "entite.hpp"
#include "formation.hpp"
#include <string>
#include <iostream>
#include <unistd.h>
#include <fcntl.h>

using namespace std;

vector<vector<string>> read_from_csv(int fd1)
{
	string temp;
	char c[1];
	vector<string> f_info;
	vector<vector<string>> all_info;
	vector<formation> fs;
	while(read(fd1,c,1))
	{
		if(c[0] == ',')
		{
			f_info.push_back(temp);
			temp = "";
		}
		if(c[0] == '\n')
		{
			all_info.push_back(f_info);
			f_info.clear();
			temp = "";
		}
		if(c[0] !=',' && c[0] != '\n')
			temp += c;
	}
	return all_info;
}


int main()
{
	int fd1 = open("formations.csv",O_RDONLY,777);
	vector<string> f = read_from_csv(fd1)[2];
	formation LSD(f.at(0),f.at(1),f.at(2),f.at(3),f.at(4),f.at(5),f.at(6),"UM6P");
	LSD.afficher_info();
	vector<formation> fs;
	entite cshes(fs,"CSHES","UM6P");
	cshes.ajouter_formation(LSD);
	cshes.afficher_info();
	return 0;
}
