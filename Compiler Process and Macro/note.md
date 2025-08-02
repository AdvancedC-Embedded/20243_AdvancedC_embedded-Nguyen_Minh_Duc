- 3 nhoms chính

1. #include
2. #define, #undef
3. #if, #elif, #ifndef #endif, #else

#: tạo thành chuỗi
##: nối chuỗi
...
__VA_ARGS__ : variadic 
\

```c
#incluce <stdio.h>
```

1. Preprocessor

main.c main.cpp
test.c
test1.c
test2.c

===> main.i
 - Thay theé các header và các file include
 - Xóa những comment
 - Thay thế các macros đã dc define trc đó

2. Compiler
main.i ==> main.s

3. Assembler

main.s ==> main.o

4. Linker
main.o test.o test1.o test2.o test.exe
int main()

5. Execute
./test
./main

