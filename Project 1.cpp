/* Jayden Pink jpink1@cnm.edu
Program 1 Greenhouse Pots*/

#include <iostream>
using namespace std;


int main()
{
	cout << "\n Jayden Pink, Greenhouse Pots"
		<< "\n Calculate the volume of the pots and its cost.";

	//declare variables
	int potDiameter = 0, numPots = 0, height = 0;
	double totalVolume = 0, gravelVolume = 0, soilVolume = 0;
	double aveDiameter = 0, aveRadius = 0;
	double soilCost = 0, gravelCost = 0;
	double finalcost;
	const double PI = 3.14159;
	const double SOIL_PRICE = 7.97;
	const double GRAVEL_PRICE = 3.98;
	double totalCost;

	//Get pot information
	cout << "\n \n Enter the diameter of the pot, in inches: \n";
	cin >> potDiameter;
	cout << "\n Enter the number of pots: \n";
	cin >> numPots;

	cout << "\n Number of Pots: " << numPots;
	cout << "\n Pot Diamter: " << potDiameter;

	//Calculate Volumes
	//get the height of the pot
	height = potDiameter;

	//Calculate the average diameter of the pot
	aveDiameter = (potDiameter + potDiameter - 2) / 2.0;
	aveRadius = aveDiameter / 2.0;
	totalVolume = PI * aveRadius * aveRadius * height;
	double potVolume80 = totalVolume * .8;

	//calculate volume of 1 inch of gravel
	gravelVolume = PI * aveRadius * aveRadius * 1;
	
	cout << "\n \n The Volume of the Gravel: " << gravelVolume;

	//calculate soil volume
	soilVolume = potVolume80 - gravelVolume;

	cout << "\n The Volume of the Soil: " << soilVolume;

	//Calcualate the cost for all pots
	cout.precision(3); 
	cout.setf(ios::showpoint);
	
	soilCost = (soilVolume / 1728)*SOIL_PRICE*numPots;
	cout << "\n The Cost of the Soil is: $" << soilCost;
	cout.precision(2);
	cout.setf(ios::showpoint);
	gravelCost = (gravelVolume / 1728)*GRAVEL_PRICE*numPots;
	cout << "\n The Cost of the Gravel is: $" << gravelCost;

	//Calculate the total cost for all pot volumes.
	cout.precision(3);
	cout.setf(ios::showpoint);
	totalCost = gravelCost + soilCost;
	finalcost = totalCost * numPots;
	cout << "\n The Total Cost to fill the pot is: $" << finalcost << "\n"
		<< "\n Have a wonderful day."
		<< "\n \n";
		
	return 0;
}