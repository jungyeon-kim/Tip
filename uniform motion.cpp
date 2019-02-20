#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

// ���� �������� �Ÿ��� ��ȯ�ϴ� �Լ�
inline double distance(double pX, double pY, double mX, double mY)
{
	return sqrt(pow(pX - mX, 2) + pow(pY - mY, 2));
}

int main()
{
	double speed = 10.0;
	double playerX = 0, playerY = 0;
	double mouseX = 0, mouseY = 0;
	double dist = 0;

	cout << "input: playerX, playerY, mouseX, mouseY: ";
	cin >> playerX >> playerY >> mouseX >> mouseY;

	while (dist = distance(playerX, playerY, mouseX, mouseY))	// ���� �������� �Ÿ� �� ���� (�Ÿ��� 0�̵Ǹ� ���� ��Ż)
	{
		// �÷��̾������� ���콺������ �Ÿ��� �̵������� ������츦 ó��
		if (fabs(mouseX - playerX) < (mouseX - playerX) / dist * speed
			&& fabs(mouseY - playerY < (mouseX - playerX) / dist * speed))
		{
			playerX = mouseX;
			playerY = mouseY;
			cout << "(" << playerX << ", " << playerY << ")" << endl;
		}
		// �÷��̾ ���콺 ��ǥ�� �̵�
		else
		{
			playerX += (mouseX - playerX) / dist * speed;
			playerY += (mouseY - playerY) / dist * speed;
			cout << "(" << playerX << ", " << playerY << ")" << endl;
		}

		Sleep(1000);
	}
}