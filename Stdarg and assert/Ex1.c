#include <stdio.h>
#include <stdarg.h>


/**
 * Cung cấp các phương thức để làm việc với các hàm có số lượng parameter k xác định
 * va_list
 * va_start
 * va_arg
 * va_copy
 * va_end
 */

void test(int count, ...)
{
    va_list args;
    va_list args1;

    // typedef char* args
    // char* args = "1, 2, 3, hello, 83";
    // char* args = "5, 1, 2, 6, 3.5, hello"
    /*
    args
    0x01 0x02
    int: 4 byte
    char 1 byte
    [][][][][]
    */

    va_start(args, count); // xác định điểm bắt đầu của biến lưu danh sách để xử lý
    va_copy(args1, args);
    // va_arg(args, type of paramater);
    printf("value 1: %d\n",va_arg(args, int));
    printf("value 2: %d\n",va_arg(args, int));
    printf("value 3: %d\n",va_arg(args, int));
    printf("value 4: %f\n",va_arg(args, double));
    printf("%s\n",va_arg(args, char*));

    va_end(args); // giải phóng danh sách đối số

}

int main()
{
    test(5,1,2,6,3.5,"hello");
}
