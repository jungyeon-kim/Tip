#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

// ���� �������� �Ÿ��� ��ȯ�ϴ� �Լ�
double distance(double pX, double pY, double mX, double mY)
{
	return sqrt(pow(pX - mX, 2) + pow(pY - mY, 2));
}

int main()
{
	double speed = 10.0;
	double playerX = 0, playerY = 0;
	double mouseX = 0, mouseY = 0;
	double dist = 0;

	cin >> playerX >> playerY >> mouseX >> mouseY;

	while (playerX != mouseX && playerY != mouseY)
	{
		// ���� �������� �Ÿ� �� ����
		dist = distance(playerX, playerY, mouseX, mouseY);

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