#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	int potential_prime = 2;
	vector<int> primes (1, potential_prime);
	int limit = 1000;
	while (primes.size() < limit)
	{
		++potential_prime;
		bool isPrime = 1;
		// Check for primacy by testing if number can be factored by any of the primes that have been previously identified
		// It lacks scalability, but for current limit, it's acceptable
		for (auto &n : primes)
		{
			if ((potential_prime % n) == 0)
			{
				isPrime = 0;
				break;
			}
		}
		if (isPrime)
		{
			primes.push_back(potential_prime);
		}
	}

	// Obtain the sum of all the primes and print to output
	int sum = 0;
	for (auto &n : primes)
	{
		sum += n;
	}
	cout << sum << endl;
	return 0;
}