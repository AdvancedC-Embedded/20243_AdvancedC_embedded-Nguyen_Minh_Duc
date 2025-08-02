#include <stdio.h>



#include <assert.h>

/**
 * assert(expression)
 */

#define LOG(condition, notification) assert(condition && notification);

int main()
{
    int x=10;
    assert(x==10);
    printf("%d\n",x);
    printf("hello");
    return 0;
}
