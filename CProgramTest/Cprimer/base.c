#include <stdio.h>
// 注释 我是
// 系统库 <>
// 用户自定义 ""
void p(char *s);

int main()
{
    int dogs;
    printf("How many dogs do you have?\n");
    dogs = 34;
    printf("So you have %d dog(s)\n", dogs);
    p("shang");
    return 0;
}

void p(char *s)
{
    printf("%s\n",s);
}