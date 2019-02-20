#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

// 점과 점사이의 거리를 반환하는 함수
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
		// 점과 점사이의 거리 값 갱신
		dist = distance(playerX, playerY, mouseX, mouseY);

		// 플레이어지점과 마우스지점의 거리가 이동값보다 작은경우를 처리
		if (fabs(mouseX - playerX) < (mouseX - playerX) / dist * speed
			&& fabs(mouseY - playerY < (mouseX - playerX) / dist * speed))
		{
			playerX = mouseX;
			playerY = mouseY;
			cout << "(" << playerX << ", " << playerY << ")" << endl;
		}
		// 플레이어가 마우스 좌표로 이동
		else
		{
			playerX += (mouseX - playerX) / dist * speed;
			playerY += (mouseY - playerY) / dist * speed;
			cout << "(" << playerX << ", " << playerY << ")" << endl;
		}

		Sleep(1000);
	}
}