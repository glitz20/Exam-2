//I affirm that all code given below was written solely by me, Sabin Sapkota, and that any help I received//
//adhered to the rules stated for this exam//

//Submitted By Sabin Sapkota//

//Header file for City Class//


#ifndef CITY_H
#define CITY_H
#include <vector>
#include <iostream>
#include <string>
using namespace std;
class City
{

public:

	//Creates a new city with the given name
	
	
	City(string cityName);

	//This is the destructor for the city
	~City();

	//Returns the city name
	string getCityName();

	//Returns the number of citizens in this city
	int populationSize();

	//Returns the citizen at the given index.
	Citizen* getCitizenAtIndex(int index);

	//Adds a citizen to this city
	void addCitizen(Citizen* citizens);

	//Returns the citizen with the given id.
	Citizen* getCitizenWithId(int id);

	//Returns a vector of citizens that all have
	//the given color as their favorite color.
	vector<Citizen*> getCitizensForFavoriteColor(string color);

private:
	string city;
	vector<Citizen*>citizenlist;//to store the information of citizens//
};
#endif
