# Homework stdarg and assert

- __FILE STRUCTURE__

```bash
project/
├── src/
│   ├── main.c
│   ├── error_handler.c
│   ├── math_utils.c
├── inc/
│   ├── error_handler.h
│   ├── math_utils.h
|   Makefile
```
- __Task requirements__

1. trong file `error_handler` chứa hàm xử lý lỗi bằng `assert` khi mẫu bằng 0

2. Trong file `math_utils` chứa hàm `divide` 
    - Tử bằng tổng của nhiều số
    - Mẫu bằng tổng của nhiều số
```
tử = 1+2+3+4+....
mẫu = 1+2+3+4+...
```
- Nếu tổng các số ở mẫu _bằng 0_ thì chương trình sẽ dừng lại bằng cách xử lý lỗi trong file 
`error handler` ở trên mục 1
3. Ứng dụng Makefile để tự động hóa `compiler process`
