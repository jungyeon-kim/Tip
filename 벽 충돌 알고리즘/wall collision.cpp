// �� �浹üũ

// �װ��� ���� �浹üũ. 4���� ���ǹ� -> 2���� ���ǹ�
// ������Ʈ�� �ʱ� ��� �������� �̵���, ��ǥ�� ����

#define WndX 1024
#define WndY 512

void collide()
{
	static int x, y;
	static int reverseDir, randDir;

	if (abs(x - WndX / 2) > WndX / 2)
	{
		reverseDir *= -1;
		while (!randDir) randDir = rand() % 3 - 1;
		x += reverseDir;
		y += randDir;
	}

	// y�� �浹�˻� ����
}