//I affirm that all code given below was written solely by me, Sabin Sapkota, and that any help I received//
//adhered to the rules stated for this exam//

//Submitted By Sabin Sapkota//

//Header file for Citizen Class//

#ifndef CITIZEN_H
#define CITIZEN_H
#include <vector>
#include <iostream>
#include <string>
using namespace std;
class Citizen
{
public:

	//Creates a new Citizen object with the passed in
	//id, name, and favorite color
	Citizen(int id, string firstName, string lastName, string color);

	//Creates a new Citizen object by copying data from the
	//passed in citizen
	Citizen(Citizen* citizen);

	//Returns the first name of this citizen
	string getFirstName()const;

	//Returns the last name of this citizen
	string getLastName()const;

	//Returns the id for this citizen
	int getId()const;

	//Returns the favorite color for this citizen
	string getFavoriteColor();

	//Sets the favorite color for this citizen
	void setFavoriteColor(string color);

private:
	int idnt;
	string first;
	string last;
	string favcolor;
};
#endif

