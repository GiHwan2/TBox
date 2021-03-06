#ifndef TICKET_H
#define TICKET_H
#define SEAT_EMPTY_MARK '-'
#define SEAT_RESERVED_MARK 'R'
#define SEAT_COMPLETION_MARK '$'
class Ticket {
	int nRow; // 좌석 행
	int nCol; // 좌석 열
	char charCheck; // 예약 여부
	int nReservedID; // 예약 번호
	int nPayAmount; // 결제 금액
	int nPayMethod; // 결제 수단
public:
	Ticket() {}
	void setCheck(char check) { charCheck = check; }
	char getCheck() { return charCheck; }
};
#endif