#include <iostream>
#include "Screen.h"
#include "TicketBox.h��
using namespace std;
// ��ũ�� ��ü ����
void TUKoreaTBox::Initialize() {
	// Screen(��ȭ����, Ƽ�ϰ���, �¼�(nRowMax), �¼�(nColMax))
	pEuropeScreen = new EuropeScreen(���̵峪�� �� �ĸ���, 10000, 10, 10);
	pAsiaScreen = new AsiaScreen(�������� 3 - ���ع�����, 12000, 10, 10);
	pPremiumScreen = new PremiumScreen(�����ʹ� �� �� ����Ʈ", 30000, 6, 6);
}