#include <thread>
#include <chrono>

void durationTime()	// �귯�� �ð��� ��� �Լ�
{
	using namespace std::chrono;
	auto begin = chrono::steady_clock::now();	// ���۽ð��� begin�� ����
	this_thread::sleep_for(5000ms);				// ~��ŭ sleep ��Ų��.	(�̰��� ������� �־��ָ� ��)
	cout << duration_cast<milliseconds>(chrono::steady_clock::now() - begin).count() << endl;	// ������ ���ð��� ���۽ð��� ���̸� ��� -> �����ϴµ� �ɸ��� �ð�
}