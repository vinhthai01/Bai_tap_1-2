# ADVANCE C/C++
## Compiler
Compiler là quá trình biên dịch chương trình do người dùng viết bằng ngôn ngữ lập trình (C,C++,Java...) thành ngôn ngữ mà máy có thể hiểu được (machine code).
Quá trình Compiler có 4 bước :
![anh](image.png)
+ Bước 1 (Preprocessing): chuyển source code (.c, .cpp) thành file (.i)

    + ` gcc -E main.c -o main.i `
 
    + Coppy hết nội dung của file được #include vào trong file .i .File được include có thể có nhiều định dạng (.c, .h, .txt,...)
 
    + Thay thế các macro thành các nội dung tương ứng
 
    + Loại bỏ các comment ra khỏi chương trình
 + Bước 2 Compilation: chuyển đổi từ file (.i) về file (.s) (file assemply). Trình biên dịch chuyển đổi mã nguồn về 
    + `gcc -S main.i -o main.s`
 + Bước 3 Assemble : chương trình tiếp tục chuyển file .s thành file .o
    +  `gcc -c main.s -o main.o`
 + Bước 4: Linking
    + Liên kết tất cả các thư viện và các file được include -> file thực thi
    + `gcc main.o -o main.exe `
## CÁC CHỈ THỊ TIỀN XỬ LÝ
#### Macro
Macro được dùng để định nghĩa những thứ cần định nghĩa trước khi quá trình biên dịch diễn ra. Nó được xử lý ở quá trình tiền xử lý. Khi trình biên dịch gặp tên macro, nó sẽ thay thế tên đó bằng định nghĩa của macro

Vd : #define SIZE 256
#### Variadic Macro
Là loại **macro** có thể nhận tham số không xác định trước.

#define DISPLAY(...)   ____VA_ARGS____
Trong đó:
+ `...`: Nhận tham số không xác định
+ __VA_ARGS__: tham số biến đổi trong phần thân của macro.
VD : Tạo mảng


        #define ARRAY(...)                  \
        int array[] = {__VA_ARGS__};        \
        int i = 0;                          \
        for ( ; i < sizeof(array)/sizeof(int) ; i++){        \
            printf ("array[%d] = %d\n", i,array[i]);         \
        }
        
        
        int main( int argc, char const *argv[] ){
        
            ARRAY(1,5,3);
            return 0;
        }

  Sau bước tiền xử lý và giá trị của mảng đã được thay thế :

        int main( int argc, char const *argv[] ){
        
            int array[] = {1,5,3}; 
            int i = 0; 
            for ( ; i < sizeof(array)/sizeof(int) ; i++){ 
              printf ("array[%d] = %d\n", i,array[i]); 
            };
            return 0;
        }
  

#### Chỉ thị tiền xử lý #ifdef, #ifndef

##### - ifdef

        #ifdef
        
        #endif

Dùng để kiểm tra một macro đã được khai báo hay chưa. Nếu macro **ĐÃ ĐƯỢC** định nghĩa thì các dòng lệnh sau đó sẽ được biên dịch và thực thi, cho đến khi gặp #endif

##### - ifndef

        #ifndef
        
        #endif
        
Dùng để kiểm tra một macro đã được khai báo hay chưa. Nếu macro **CHƯA** được định nghĩa thì các dòng lệnh sau đó sẽ được biên dịch và thực thi, cho đến khi gặp #endif
  
