/*Write a program that calculates and prints the sum of all the natural numbers divisible by
either 3 or 5, up to a given limit entered by the user.
NOTE: Or mean either divisible by 3, 5 or both*/

#include <iostream>
using namespace std;

int main()
{
	int N;
	int num;
	int result = 0;

	// input goes here

	cout << "Enter the highest number!" << endl;
	cin >> N;

	while (N < 0)
	{
		cout << "Enter positve numbers ONLY\n";
		cin >> N;
	}
	// iterate from 0 to N

	for (num = 0; num <= N; num++)

	{

		if ((num % 3 == 0 or num % 5 == 0))
		{
			result = result + num;
		}
	}

	cout << "The sum of all natural numbers divisible by 3 or 5 up to " << N << " is " << result;

	return 0;
}
