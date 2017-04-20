//I affirm that all code given below was written solely by me, Sabin Sapkota, and that any help I received//
//adhered to the rules stated for this exam//

//Submitted By Sabin Sapkota//

//Implementation file for Citizen Class//
#include<iostream>
#include<vector>
#include<string>
#include "Citizen.h"

using namespace std;

Citizen::Citizen(int id, string firstName, string lastName, string color)//lets user enter information for citizens//
{
	idnt = id;
	first = firstName;
	last = lastName;
	favcolor = color;
}

Citizen::Citizen(Citizen* citizen)
{
	if (citizen != NULL)
	{//gets information of the citizen//
		idnt = citizen->getId();
		first = citizen->getFirstName();
		last = citizen->getLastName();
		favcolor = citizen->getFavoriteColor();
	}

}

int Citizen::getId() const
{
	return idnt;
}

string Citizen::getFirstName()const
{
	return first;
}

string Citizen::getLastName()const
{
	return last;
}

string Citizen::getFavoriteColor()
{
	return favcolor;
}

void Citizen::setFavoriteColor(string color)
{
	favcolor = color;
}