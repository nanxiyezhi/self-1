//single-line comment
// Created by 19568 on 24-9-6.
//

/*
 *this is a multi-line comment
 */


//printf函数在.h文件里
//.h:header file
//stdio:standard input/output   头文件？
#include <stdio.h>

/*
 * main function   ？不接受任何参数，进行动作，返回整数
 * y <- f(x)
 *
 * int:integer整数 (return) 不可省            ？返回整数
 *
 * ？一个实体调用main函数，main函数结束它会拿到返回值0
 */
 int main(void) {

    // "hello world\n": string 字符串
    // printf: print 打印到控制台 + f 打印格式 (format)
    printf("Hello, World\n");

    // return statement (return to operating system)
    // 0:exit code 退出码，0表示一个正常的终止，非0表示非正常终止
    return 0;        //默认会加上
}
