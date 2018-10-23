//
//  main.c
//  1
//
//  Created by DeterTao on 2018/10/23.
//  Copyright © 2018年 DeterTao. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 第一行代码
    printf("Hello, World!\n");
    return 0;
}

// 不能用表达式 （x-y<0）来代替 (x<y),因为前者会溢出
// 不能用 -y < -x 来替代，二进制补码表示中负数和正数的范围是不对称的

// 直接存储器存取（DMA），数据可以不通过处理器直接从磁盘到达主存

// 进程是对处理器、主存、I/O设备的抽象表示；文件是对I/O设备的抽象表示；虚拟存储s器是对主存和磁盘I/O设备的抽象表示
// 进程是操作系统对一个正在运行的程序的一种抽象
// 上下文切换是CPU并发执行进程，这种交错执行的机制

// 文件就是字节序列，每个I/O设备，包括磁盘、键盘、显示器、甚至网络，都可以视为文件
