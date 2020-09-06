#include <stdio.h>

#define PRINT1(a, b)            \
    {                           \
        printf("print a\n");    \
        printf("print b\n");    \
    }                           \

#define PRINT2(a, b)            \
    do{                         \
        printf("print a\n");    \
        printf("print b\n");    \
    }while(0)                   \

#define PRINT(a)    \
    do{ \
        printf("%s : %d\n", #a, a); \
        printf("%d : %d\n", a, a);  \
    } while (0);    \

#define TYPE1(type,name) type name_##type##_name;
#define TYPE2(type,name) type name##_##type##_name;

#define ERROR_LOG(module) fprintf(stderr, "error : "#module"\n")
