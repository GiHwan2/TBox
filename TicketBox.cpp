#include <iostream>
#include "Screen.h"
#include "TicketBox.h“
using namespace std;
// 스크린 객체 생성
void TUKoreaTBox::Initialize() {
	// Screen(영화제목, 티켓가격, 좌석(nRowMax), 좌석(nColMax))
	pEuropeScreen = new EuropeScreen(“미드나잇 인 파리＂, 10000, 10, 10);
	pAsiaScreen = new AsiaScreen(＂무간도 3 - 종극무간＂, 12000, 10, 10);
	pPremiumScreen = new PremiumScreen(＂에너미 앳 더 게이트", 30000, 6, 6);
}