#include <iostream>
#include <string>
#include "Screen.h¡°
using namespace std;

Screen::Screen(string name, int price, int row, int col) {
	strMovieName = name;
	nRowMax = row;
	nColMax = col;
	nTicketPrice = price;
	pSeatArray = new Ticket * [nRowMax];
	for (int r = 0; r < nRowMax; r++) {
		pSeatArray[r] = new Ticket[nColMax];
	}
	for (int i = 0; i < nRowMax; i++) {
		for (int j = 0; j < nColMax; j++) {
			pSeatArray[i][j].setCheck(SEAT_EMPTY_MARK);
		}
	}
}