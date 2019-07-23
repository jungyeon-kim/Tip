bool isPrimeNumber(int n)
{
	int last{ n / 2 };

	if (n <= 1) return false;
	for (int i = 2; i < last + 1; ++i)
		if (n % i == 0) return false;

	return true;
}