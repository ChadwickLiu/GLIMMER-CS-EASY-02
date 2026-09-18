#include <stdio.h>
int main()
{
    
    struct perinfo{
        long long int name;
        char sex;
        int age;
        double height;
    };
    printf("结构体占用的字节大小为：%d",sizeof(struct perinfo));

    typedef struct perinfo woyaojinweiguang;

    return 0;
}