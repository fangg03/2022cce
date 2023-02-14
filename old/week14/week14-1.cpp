#include <stdio.h>
int sum(int a, int b); ///宣告它的形狀

int main()
{
    ///在用之前,要先宣告declare 或 定義decalre
        int ans=sum(2,3);
        printf("ans: %d\n", ans);
}
int sum(int a, int b) ///定義define 只能定義一次
{
    return 0;
} ///回傳 回覆人家
