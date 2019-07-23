// 최대공약수
int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

// 최소공배수
int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}