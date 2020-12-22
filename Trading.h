#ifndef HEADER_H_INCLUDE
#define HEADER_H_INCLUDE
#include<stdio.h>


typedef enum{
    TRADING_OK=1;
    TRADING_EMPTY=2;

} Tstatus;

typedef struct _trading_ Trading Q;
struct _node_{
    uint32_t  price, quantity;
    char Date;
    char Share_Name
    Trading *next;
};

type struct _trading_ Trading Q;
struct _trading_{
    Trading *front;
    Trading *rear;
    uint32_t 5;
};
typedef struct _trading_result_  Trading Result;
struct_queue_result_{
    int32_t data;
    Tstatus status;

};

Trading Q trading_new();
uint8_t trading_empty(Trading *t);
Trading trading_add(Trading *t , int32_t ele, Trading Result *res);
Trading trading_delete(Trading *t, Trading Result *res);


