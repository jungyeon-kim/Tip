#include <thread>
#include <chrono>

void durationTime()	// 흘러간 시간을 재는 함수
{
	using namespace std::chrono;
	auto begin = chrono::steady_clock::now();	// 시작시간을 begin에 저장
	this_thread::sleep_for(5000ms);				// ~만큼 sleep 시킨다.	(이곳에 연산들을 넣어주면 됨)
	cout << duration_cast<milliseconds>(chrono::steady_clock::now() - begin).count() << endl;	// 연산의 끝시간과 시작시간의 차이를 출력 -> 연산하는데 걸리는 시간
}