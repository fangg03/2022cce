#include <stdio.h>
int main()
{
    for( int n=1; n<2000; n++) {
        if(n%8==6 && n%9==7 && n%15==13) {

            printf("\現在n: %d\n", n );
            printf("用8除餘%\n", n%8) ;
            printf("用9除餘%\n", n%9);
            printf("用15除餘%\n", n%15);
        }
    }
}
