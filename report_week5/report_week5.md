# BÁO CÁO TUẦN 5 (18/9/23 - 24/9/23)

## 1. Preprocessor

![Alt text](image.png)

- Tiền xử lí (Preprocessor) là giai đoạn đoạn đầu tiền trong 4 giai đoạn để chạy 1 chương trình C được viết. Tiền xử lí cung cấp các chỉ thị tiền xử lí (đứng sau dấu `#`) và chúng được thực thi trong chương trình tiền xử lí. Chúng ta có thể đặt chỉ thị tiền xử lí ở bất kì đâu trong chương trình C

- Danh sách chỉ định tiền xử lí:

| Chỉ thị tiền xử lí | Định nghĩa                                                                                  |
| ------------------ | ------------------------------------------------------------------------------------------- |
| #define            | dùng để define a macro                                                                      |
| #undef             | dùng để undefine a macro                                                                    |
| #include           | dùng để đưa 1 tệp vào chương trình mã nguồn                                                 |
| #ifdef             | Được sử dụng để bao gồm một phần mã nếu một macro nhất định được xác định bởi #define       |
| #ifndef            | Được sử dụng để bao gồm một phần mã nếu một macro nhất định không được xác định bởi #define |
| #if                | Kiểm tra điều kiện đã chỉ định                                                              |
| #else              | Mã thay thế thực thi khi #if thất bại                                                       |
| #endif             | Dùng để đánh dấu sự kết thúc của #if, #ifdef và #ifndef                                     |

- Có 4 loại chỉ định tiền xử lí:
1. Macros
2. File Inclusion
3. Conditional Compilation
4. Other directives

#### 1. Marco

- Marco là 1 mảnh chương trình được đặt tên.
- Trong tiên xử lí thì các biến chưa được sinh ra vì vậy có dùng `#define` như một cách thay thế khai báo biến.
- `#define` được dùng để định nghĩa 1 Marco.
```C

// C Program to illustrate the macro
#include <stdio.h>
 
// macro definition
#define LIMIT 5
 
int main()
{
    for (int i = 0; i < LIMIT; i++) {
        printf("%d \n", i);
    }
 
    return 0;
}
```

- Trong ví dụ trên, mỗi khi compiler gặp **LIMIT** thì nó sẽ tự động thay thế bằng giá trị 5.

**Marco có đối số**

- Chúng ta có thể truyền đối số đến Marco. Nó làm việc như hàm
```C

// C Program to illustrate function like macros
#include <stdio.h>
 
// macro with parameter
#define AREA(l, b) (l * b)
 
int main()
{
    int l1 = 10, l2 = 5, area;
 
    area = AREA(l1, l2);
 
    printf("Area of rectangle is: %d", area);
 
    return 0;
}
```

#### 2. File Inclusion

- Header file thư viện có sẵn
```C
#include <file_name>
```

- Header file thư viện người dùng tự định nghĩa

```C
#include "filename"
```

#### 3. Biên dịch có điều kiện

- Biên dịch có điều kiện giúp trình biên dịch xác định các phần của chương trình và bỏ qua 1 số phần của chương trình dựa trên 1 số điều kiện trong quá trình biên dịch.

##### 1. ifdef

- Đây là chỉ thị đơn giản nhất. Khối này gọi là nhóm có điều kiện. 
- '#endif' luôn khớp với '#ifdef' (hoặc '#ifndef' hoặc '#if' gần nhất). Ta có thể lồng chúng vào nhau thành nhiều lớp với điều khiện chúng phải được lồng hoàn toàn vào nhau.
- Chúng chỉ được thực thi khi điều kiện đúng.
- Cú pháp:
```C
#ifdef MACRO
    controlled text
#endif /* macroname */
```