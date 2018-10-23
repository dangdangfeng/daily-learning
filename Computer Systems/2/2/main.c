//
//  main.c
//  2
//
//  Created by DeterTao on 2018/10/23.
//  Copyright © 2018年 DeterTao. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int i = 100000000000000000000000000*100000000;
    return 0;
}

// 一个由值0和1组成位 bit
// 8位一字节

// 用强制类型转换来访问和打印不同程序对象的字节表示
typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len){
    int i;
    for (i = 0 ; i < len; i++) {
        printf("%.2x",start[i]);// 整数必须以至少两个数字的16进制格式输出
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(x));
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}


// 程度仅仅是字节序列
int sum(int x, int y) {
    return x + y;
}
