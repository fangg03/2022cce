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
