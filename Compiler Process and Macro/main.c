#include <stdio.h>



#define SIZE 20
#undef SIZE
#define SIZE 30
#undef SIZE
#define SIZE 50
// code
#define CREATE_FUNC(name, cmd)   \
void name(){                       \
    printf(cmd);                   \
}

void name2() // 0x01
{

}

// CREATE_FUNC(duc, dfd);

int a = SIZE;

int main() {
    
    printf("%d", a);


    return 0;
}
