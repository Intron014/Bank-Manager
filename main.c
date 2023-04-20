#include "main.h"

typedef struct card{
	int type; //1 -> Debit; 2 -> Credit; 0 -> Disabled;
}CARD;

typedef struct transactions{
	int id;
	char description[155];
	float value;
}TRANS;

typedef struct account{
	int accnumber; 
	int accholder; 
	int accid[9];
	float accmoney;
	CARD card;
	TRANS transactions;
}ACCOUNT;

typedef struct bank{
	ACCOUNT user;
}BANK;

void main(){
	
}
