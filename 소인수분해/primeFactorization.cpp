void primeFactorization(int num)
{
	int div{ 2 };

	while (num != 1)
	{
		if (!(num % div))
		{
			cout << div << "\n";
			num /= div;
		}
		else ++div;
	}
}