/* 
#include <stdio.h>
int main(void)
{
    int x = -150;
    if(x < 0)
    {
        x = -x;
    }   
    printf("x의 절댓값은 %d입니다. \n", x);
    return 0;
}
*/

#include <stdio.h>

int main(void)
{
    int x = 95;
    if(x >= 90)
    {
        printf("당신의 학점은 A");
    }
    else if(x >= 80){
        printf("당신의 학점은 B");
    }

    return 0;
}