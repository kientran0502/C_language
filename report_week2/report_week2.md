# BÁO CÁO TUẦN 2 (28/8/23 - 2/9/23)

## 1. String (continue)

#### #define and const

**define**

```C
#define TAXRATE 0.015
```

- **Define** dùng để đặt tên cho giá trị( không có khái niệm cục bộ). Ví dụ trên, mỗi khi TAXRATE được sử dụng thì sẽ được compiler hiểu là 0.015

- Khi sử dụng **Define** không có dấu bằng để gán, không được dùng dấy chấm phẩy

- **Define** thường được viết ở đầu chương trình để nhiều nguồn file dùng chung

- Nó cũng được dùng cho chuỗi hằng
```C
#define BEEP '\a'
#define TEE 'T'
#define ESC '\033'
#define OOPS "Now you have done it"
```
**constant**

- Dùng để khai báo biến kiểu hằng. Thường được sử dụng trong tính toán. Nói chùn nhìn khá giống với define.

- Khác Define là có thể dùng nó để khai bái chuỗi hằng kí tự làm standard message
```C
const char message[]=”The end of the world is night.”
```

#### # Phân tách chuỗi trong thư viện string.h

- Hàm strtok() được dùng để phân tách chuỗi và thường được dùng với vòng lặp. Hàm strtok() sẽ trả về toàn bộ chuỗi trước dấu phân cách đầu tiên
 ```C
#include <stdio.h>
#include <string.h>
// driver code
int main()
{
	char str[80]="Hello how are you-my name is-hnit";
	const char s[2]="-";
	char *token;

	/*get the first token*/
	token=strtok(str, s);

	/*walk through other tokens*/
	while(token!=NULL)
	{
		printf("%s\n", token);
		token=strtok(NULL, s);
	}
	return 0;
}
```
- Trong ví dụ trên, đấu phân cách là dấu "-"

#### # Một số hàm có sẵn trong ctype.h

![Alt text](image.png)

#### #  Một số hàm có sẵn trong stdlib.h
![Alt text](image-1.png)

## 2. Hàm trong C

- Khai báo hàm 

```C
 return_type name_of_the_function (parameter_1, parameter_2);
 ```
- Định nghĩa hàm
```C
return_type function_name (para1_type para1_name, para2_type para2_name)
{
    // body of the function
}
```
- Kiểu trả về của hàm cho biết loại giá trị nào được trả về sau khi tất cả hàm được thực thi. Khi không muốn trả về một giá trị, chúng ta có thể sử dụng kiểu dữ liệu void.

- Có 2 cách truyền đối sô cho hàm
>- Truyền bằng bằng giá trị(cách này đã biết) 

>- Gọi hàm bằng tham chiếu(sử dụng con trỏ): Cách này t có thể truyền giá trị bên ngoài trực tiếp vào hàm. Thường dùng để truyền chuỗi hoặc mảng vào hàm

ví dụ
```C
// C Program to implement
// Call by reference
#include <stdio.h>
  
// Call by reference
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
  
// Driver Code
int main()
{
    // Declaring Integer
    int x = 1, y = 5;
    printf("Before Swapping: x:%d , y:%d\n", x, y);
  
    // Calling the function
    swap(&x, &y);
    printf("After Swapping: x:%d , y:%d\n", x, y);
  
    return 0;
}
```
#### Có 4 loại hàm:

- Hàm có đối số và trả về giá trị:

```C
Function declaration : int function ( int );
Function call : function( x );
Function definition:
             int function( int x )
             {
               statements;
               return x;
             }   
```    
- Hàm có đối số nhưng không trả về giá trị:

```C
Function declaration : void function ( int );
Function call : function( x );
Function definition:
             void function( int x )
             {
               statements;
             }
```

- Hàm không có đối số và không trả về giá trị:

```C
Function declaration : void function();
Function call : function();
Function definition :
                      void function()
                      {
                        statements;
                      }
```
ví dụ
```C
// C code for function with no
// arguments and no return value
#include <stdio.h>
  
void value(void);
  
void main() { 
  value(); 
}
  
void value(void)
{
    float year = 1, period = 5, amount = 5000,
          inrate = 0.12;
    float sum;
    sum = amount;
    while (year <= period) {
        sum = sum * (1 + inrate);
        year = year + 1;
    }
    printf(" The total amount is :%f", sum);
}
```
- Hàm không có đối số nhưng trả về giá trị:

```C
Function declaration : int function();
Function call : function();
Function definition :
                 int function()
                 {
                     statements;
                      return x;
                  }
```
ví dụ
```C

// C code for function with no arguments
// but have return value
#include <math.h>
#include <stdio.h>
  
int sum();
  
int main()
{
    int num;
    num = sum();
    printf("Sum of two given values = %d", num);
    return 0;
}
  
int sum()
{
    int a = 50, b = 80, sum;
    sum = sqrt(a) + sqrt(b);
    return sum;
}
```

