#ifndef BANK_MAIN_H
#define BANK_MAIN_H
#define MAX_CARDS 1
#define MAX_TRANS 999

typedef struct card{
    int type; //1 -> Debit; 2 -> Credit; 0 -> Disabled;
    char PAN[16];
    char CVC[3];
    char secret[4];
    char exp_month[2];
    char exp_year[4];
    int credlimit;
}CARD;

typedef struct transactions{
    int id;
    char description[155];
    float value;
}TRANS;

typedef struct accholder{
    char name[50];
    char id[9];
    int creditaccepted;

}USER;

typedef struct account{
    int accnumber;
    float accmoney;
    TRANS transactions[MAX_TRANS];
}ACCOUNT;

typedef struct bank{
    ACCOUNT account;
    USER user;
    CARD card[MAX_CARDS];

}BANK;



#endif //BANK_MAIN_H
