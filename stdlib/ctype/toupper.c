//
// Created by zhang on 2017/1/4.
//

//C 库函数 int toupper(int c) 把小写字母转换为大写字母。
//如果 c 有相对应的大写字母，则该函数返回 c 的大写字母，否则 c 保持不变。返回值是一个可被隐式转换为 char 类型的 int

#include <stdio.h>
#include <ctype.h>

int main()
{
    int i = 0;
    char c;
    char str[] = "W3Cschool Tutorials";

    while(str[i])
    {
        putchar (toupper(str[i]));
        i++;
    }

    return(0);
}

//1   数字
//完整的数字集合 { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }
//2	十六进制数字
//集合 { 0 1 2 3 4 5 6 7 8 9 A B C D E F a b c d e f }
//3	小写字母
//集合 { a b c d e f g h i j k l m n o p q r s t u v w x y z }
//4	大写字母
//集合 {A B C D E F G H I J K L M N O P Q R S T U V W X Y Z }
//5	字母
//        小写字母和大写字母的集合
//6	字母数字字符
//        数字、小写字母和大写字母的集合
//7	标点符号字符
//        集合 ! " # $ % & ' ( ) * + , - . / : ; < = > ? @ [ \ ] ^ _ ` { | } ~
//8	图形字符
//        字母数字字符和标点符号字符的集合
//9	空格字符
//        制表符、换行符、垂直制表符、换页符、回车符、空格符的集合。
//10	可打印字符
//        字母数字字符、标点符号字符和空格字符的集合。
//11	控制字符
//        在 ASCII 编码中，这些字符的八进制代码是从 000 到 037，以及 177（DEL）。
//12	空白字符
//        包括空格符和制表符。
//13	字母字符
//        小写字母和大写字母的集合。