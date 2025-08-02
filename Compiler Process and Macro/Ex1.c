#include <stdio.h>

#define SIZE 20
#undef SIZE
#define SIZE 30

#define SIZE 50

#define CREATE_FUNC(name, cmd)   \
void name(){                       \
    printf(#cmd);                   \
}

void name2() // 0x01
{

}

 CREATE_FUNC(duc, dfd);

int main() {
    
    name2();

    duc();

    return 0;
}
