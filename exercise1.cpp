/*Write a program that calculates and prints the sum of all the natural numbers divisible by
either 3 or 5, up to a given limit entered by the user.
NOTE: Or mean either divisible by 3, 5 or both*/

#include <iostream>
using namespace std;

int main()
{
int N;
	int num;
	int result;

    // input goes here

	cout << "Enter the highest number!" << endl;
  cin >> N;


  // iterate from 1 to N
	for (num =1; num <= N; num++)
	{
		// Short-circuit operator is used
		if (num % 3 == 0 || num % 5 == 0)

            result += num;
    }
        cout << "The sum of all natural numbers divisible by 3 or 5 up to " << N <<" is " << result;

return 0;
}
