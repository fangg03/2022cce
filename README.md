# 2022cce
2022.10.11
1.「用星星畫倒過來的三角形」,利用「左手i、右手j」的口訣, 來思考迴圈執行的樣子, 先把 i:5 i:4 i:3 i:2 i:1 印出來, 使用倒過來的迴圈。裡面的j迴圈, 則是用基礎型, 就可畫出想要的星星形狀。
、、、cpp
#include <stdio.h>
int main()
{
    for(int i=5; i>0; i--){
        for(int j=0; j<i; j++){
            printf("*");
            }
        printf("i:%d星星\n", i);
    }
}

、、、
2.畫出等腰三角形。老師用 for(int k=0; k<space; k++) 的迴圈, 來畫出空格, 利用 for(int k=0; k<star; k++) 的迴圈, 來畫出星星, 收尾時印跳行。下周要考這個！
、、、cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        int space=5-i, star=2*i-1;
        for(int k=0; k<space; k++) printf(" ");
        for(int k=0; k<star; k++) printf("*");
        printf("\n");

    }
}

3.把全部皫數字都試看看能不能整除、能不能約分。使用 1個for迴圈 for(int i=1; i<=a; i++) 去試全部的數, 這個數 i 如果可以兩個都整除 if(a%i==0 && b%i==0) 恭喜你找到答案了 ans = i
、、、cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個整數,要約分: ");
    int a, b;
    scanf("%d %d", &a, &b);

    int ans;
    for(int i=1; i<=a; i++){
        if( a%i==0 && b%i==0){
            ans = i;
        }
    }
    printf("ans: %d 可約分", ans);
}
、、、

4.「輾轉相除法」可以找最大公因數還可以快速約分哦！口訣:老大a、老二b、老三c=a%b 如果是0 則老二b是答案。老二變老大、老三變老二, 繼續做,就成功了。
、、、cpp
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    while(1){
        c = a%b;
        printf("老大:%d 老二:%d 老三:%\n", a, b, c);
        if( c==0 ) break;
        a=b;
        b=c;
    }
    printf("答案: %d ", b);
}
、、、
