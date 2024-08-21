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
## Macro
Macro được dùng để định nghĩa những thứ cần định nghĩa trước khi quá trình biên dịch diễn ra

