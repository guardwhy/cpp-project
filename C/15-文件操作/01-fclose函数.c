#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    打开文件和关闭文件
*/
void test(){
    FILE *fp = NULL;
    // 打开文件
    fp = fopen("a.txt", "r");
    // 条件判断
    if(fp == NULL){
        perror("fopen");
        return;
    }

    printf("打开成功\n");
    // 关闭fp
    fclose(fp);
}

int main()
{
    // 调用函数
    test();
    return 0;
}
