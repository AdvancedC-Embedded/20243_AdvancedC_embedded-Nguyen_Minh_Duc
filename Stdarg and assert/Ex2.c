#include<stdio.h>
#include<stdarg.h>

#define tong(...) sum(__VA_ARGS__, 'a');



void sum(int amount,...){
    va_list args;
    va_list args1;
    va_copy(args1, args);
    va_start(args,amount);
    
    // sao cheps
    int Sum=amount;
    while ((va_arg(args1, char*)) != (char *)'a')
    {
        Sum += va_arg(args, int);
    }
    
    printf("%d",Sum);

    if(args1 == NULL)
    {
        printf("1");
    }
    else
    printf("o");
    

    va_end(args);
    va_end(args1);

}

int main(){
    tong(3, 1, 2, 3, 0, 5, 7);
    return 0;
}