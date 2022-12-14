#include <iostream>
#include <random>
#include <ctime>
#include <Windows.h>

using namespace std;


int main()
{
	int BaseNumberHuman;
	int BaseNumberSkeleton;

	int HumanFinalDamage;
	int SkeletonFinalDamage;

	int HumansLeft;
	int SkeletonLeft;

	int HumansDied;
	int SkeletonDied;

	default_random_engine randomGenerator(time(0));
	uniform_int_distribution<int> HumanDamageValue(7, 30);
	uniform_int_distribution<int> SkeletonDamageValue(1, 15);

	cout << "Welcome to Combat Simulator" << endl;
	cout << "----------------------------" << endl;
	cout << "Input the number of Humans: ";
	cin >> BaseNumberHuman;
	cout << endl << "Input the number of Skeletons: ";
	cin >> BaseNumberSkeleton;

	cout << endl << "----------------------------" << endl;
		cout << "Begining Combat! ";

	cout << endl << endl << "<Combat Noises>";

	cout << endl << endl << "Battle Ended!" << endl;

	cout << "----------------------------";

	int HumanDamage = HumanDamageValue(randomGenerator);
	int SkeletonDamage = SkeletonDamageValue(randomGenerator);

	HumanFinalDamage = HumanDamage * BaseNumberHuman;
	SkeletonFinalDamage = SkeletonDamage * BaseNumberSkeleton;

	if (HumanFinalDamage > SkeletonFinalDamage)
	{
		cout << endl << endl << "Humans Win!";

		HumansLeft = (HumanFinalDamage - SkeletonFinalDamage) / HumanDamage;
		
		HumansDied = BaseNumberHuman - HumansLeft;

		SkeletonDied = BaseNumberSkeleton;

		cout << endl << endl << "There are " << HumansLeft << " Humans left.";
		cout << endl << HumansDied << " Humans and " << SkeletonDied << " Skeletons lost their lives." << endl;
	}

	else if (SkeletonFinalDamage > HumanFinalDamage)
	{
		cout << endl << endl << "Skeletons Win!";

		SkeletonLeft = (SkeletonFinalDamage - HumanFinalDamage) / SkeletonDamage;

		SkeletonDied = BaseNumberSkeleton - SkeletonLeft;

		HumansDied = BaseNumberHuman;

		cout << endl << endl << "There are " << SkeletonLeft << " Skeletons left.";
		cout << endl << HumansDied << " Humans and " << SkeletonDied << " Skeletons lost their lives." << endl;
	}

	else
	{
		cout << endl << endl << "Everybody Died :(" << endl;
	}
}
