#include <stdio.h>
int sum(int a,int b);///先宣告declare

int main()
{///再用之前,要先宣告declare或定義define
    int ans = sum(2,3);///使用呼叫
    printf("ans: %d\n", ans);
}
int sum(int a,int b)///定義define
{
    return a + b;
}///回傳 回覆人家
