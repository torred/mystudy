#include "sample01.h"

int main(void)
{
    int a = 20;
    int b = 19;

    ERROR_LOG("add");
    ERROR_LOG(Device=0);

    TYPE1(int, c);
    name_int_type = a;
    TYPE2(int, d);
    d_int_type = a;

    PRINT(a);
    if (a > b){
        PRINT1(a, b);
    }else{
        PRINT2(a, b);
    }

    return 0;
}
