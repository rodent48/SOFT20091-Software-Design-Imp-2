// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>


struct timeType
{
	int hr;
	double min;
	int sec;
};

struct tourType
{
	std::string cityName;
	int distance;
	timeType travelTime;
};

int main()
{
	tourType destination;
	destination.cityName = "Nottingham";
	destination.distance = 130;
	destination.travelTime.hr = 3;
	destination.travelTime.min = 15;
	destination.travelTime.sec = 0;

	returnTourType(destination);

	return 0;
}

void returnTourType(tourType tourName)
{
	std::cout << "City Name: " << tourName.cityName << "." << std::endl;
	std::cout << "Distance of tour: " << tourName.distance << "." << std::endl;
	std::cout << "Travel time: " << tourName.travelTime.hr << " hours, " << tourName.travelTime.min << " minutes, " << tourName.travelTime.sec << " seconds." << std::endl;
}
