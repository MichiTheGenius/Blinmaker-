#include <iostream>
#include <string>
using namespace std;

int eggsAmount;
int flourAmount;
int milkAmount;

int eggsMin = 2;
int flourMin = 300;
int milkMin = 300;

int eggPortions;
int flourPortions;
int milkPortions;
int portions[3];

int eggsNeeded;
int flourNeeded;
int milkNeeded;

int smallest;

bool noBlin()
{
	return eggsAmount < eggsMin || flourAmount < flourMin || milkAmount < milkMin;
}

void setupAmounts()
{
	cout << "How many eggs do you have: ";
	cin >> eggsAmount;
	cout << "How much flour do you have(grams): ";
	cin >> flourAmount;
	cout << "How much milk do you have(milliliters): ";
	cin >> milkAmount;
}

void setupPortions()
{
	eggPortions = eggsAmount / eggsMin;
	flourPortions = flourAmount / flourMin;
	milkPortions = milkAmount / milkMin;;
	portions[0] = eggPortions;
	portions[1] = flourPortions;
	portions[2] = milkPortions;
}

int getSmallestOfArray(int arr[], int length)
{
	int smallest = arr[0];
	for(int i = 0; i<length; i++)
	{
		if(arr[i] < smallest)
		{
			smallest = arr[i];
		}
	}
	return smallest;
}

void setupNeededIngredients()
{
	smallest = getSmallestOfArray(portions,3);
	cout << "You can make " << smallest << " portions of blins, what equates to " << smallest * 4 << " blins!" << endl;
	eggsNeeded = smallest * eggsMin;
	flourNeeded = smallest * flourMin;
	milkNeeded = smallest * milkMin;
	cout << "You will need " << eggsNeeded << " eggs." << endl;		
	cout << "You will need " << flourNeeded << " grams of flour." << endl;		
	cout << "You will need " << milkNeeded << " milliliters of milk." << endl;
}

int main()
{
	system("clear");
	setupAmounts();
	cout << "this is a test!" << endl;
	if(noBlin())
	{
		cout << "No blin today, sorry :(" << endl;
	}
	else
	{
		setupPortions();	
		setupNeededIngredients();
	}
	return 0;
}

