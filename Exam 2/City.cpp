//I affirm that all code given below was written solely by me, Sabin Sapkota, and that any help I received//
//adhered to the rules stated for this exam//

//Submitted By Sabin Sapkota//

//Implementation file for City Class//

#include<iostream>
#include <fstream>
#include<vector>
#include<string>
#include "Citizen.h"
#include "City.h"

using namespace std;

City::City(string name)
{
	city = name;
	string filename = city + ".txt";//names the text file according to the name of the city//
	fstream infile(filename, ios::in);
	if (infile.is_open())
	{
		int idnt;
		string first, last, favcolor;
		while (infile >> idnt >> first >> last >> favcolor)//order of the information in the text//
			{
			Citizen* citizen = new Citizen(idnt, first, last, favcolor);
			citizenlist.push_back(citizen);//adds citizens information to the list//
			}
		}

}

City::~City()//Destructor//
{
	fstream outfile(city + ".txt", ios::out);
	if(outfile.is_open())
	{
		for (int i = 0; i < citizenlist.size(); i++)//loops through all the citizens available//
		{

			outfile << citizenlist[i]->getId() << " "//writes out the information in the text file//
				<< citizenlist[i]->getFirstName() << " "
				<< citizenlist[i]->getLastName() << " "
				<< citizenlist[i]->getFavoriteColor() << endl;
			delete citizenlist[i];//deletes the vector//
		}
    }
	else
	{
		for (int i = 0; i < citizenlist.size(); i++)
		{
			delete citizenlist[i];//deletes the vector//
		}
	}
}

string City::getCityName()
{
	return city;
}

Citizen* City::getCitizenAtIndex(int index)
{
	if (index >= 0 && index < citizenlist.size())//loops through all the citizens available//
	{
		return citizenlist[index];
	}
	return NULL;
}

void City::addCitizen(Citizen* citizens)
{
	Citizen*citizen = new Citizen(citizens);
	citizenlist.push_back(citizen);//adds new citizen to the list//
}

int City::populationSize()
{
	return citizenlist.size();
}

Citizen*City::getCitizenWithId(int id)
{
	for (int i = 0; i < citizenlist.size(); i++)//loops through all the citizens available//
	{
		if (citizenlist[i]->getId() == id)
		{
			return citizenlist[i];//return the citizen with given id, if available//
		}
	}
	return NULL;
}

vector<Citizen*> City::getCitizensForFavoriteColor(string color)
{
	
	vector <Citizen*>colorvector;//initialing the vector, so as to match with the function data type//
	for (int i = 0; i < citizenlist.size(); i++)//loops through all the citizen//
	{
		
		
		if (citizenlist[i]->getFavoriteColor() == color)
		{
			colorvector.push_back(citizenlist[i]);
			
		}
	}
	return colorvector;//returns the citizen with matching color//
}