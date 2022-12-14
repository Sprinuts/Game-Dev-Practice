#include <iostream>
#include <random>
#include <ctime>


using namespace std;

int main()
{
	default_random_engine randomGenerator(time(0));
	uniform_int_distribution<int> diceRoll(1 , 6);

	cout << "Rolled: " << diceRoll(randomGenerator) << endl;
	cout << "2nd Roll: " << diceRoll(randomGenerator) << endl;


	system("PAUSE");
	return 0;
}
