// 벽 충돌체크

// 네개의 벽에 충돌체크. 4개의 조건문 -> 2개의 조건문
// 오브젝트는 초기 우상 방향으로 이동중, 좌표계 무관

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

	// y축 충돌검사 생략
}