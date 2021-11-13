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
	cout << eggPortions << " Egg Portions" << endl;
	cout << flourPortions << " flour Portions" << endl;
	cout << milkPortions << " milk Portions" << endl;
	portions[0] = eggPortions;
	portions[1] = flourPortions;
	portions [2] = milkPortions;
}

int getSmallestOfArray(int arr[])
{
	int length = sizeof(arr) / sizeof(arr[0]);
	int smallest = arr[0];
	for(int i = 0; i<length; i++)
	{
		if(smallest < arr[i])
		{
			smallest = arr[i];
		}
	}
	return smallest;
}
int main()
{
	setupAmounts();
	if(noBlin())
	{
		cout << "No blin today, sorry :(" << endl;
	}
	else
	{
		setupPortions();

		int smallest = getSmallestOfArray(portions;)
		
	}
	return 0;
}

