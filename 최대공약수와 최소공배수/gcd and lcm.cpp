// �ִ�����
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

// �ּҰ����
int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}