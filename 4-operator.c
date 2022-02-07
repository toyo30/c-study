// x++, x--




/*
#include <stdio.h>
#define SECOND_PER_MINUTE 60

int main(void) 
{
    int input = 1000;
    int minute = input /SECOND_PER_MINUTE;
    int second = input % SECOND_PER_MINUTE;
    printf("%d초 %d분 %d초입니다. \n", input, minute, second);

    return 0;
}
*/


//증감 연산자 

/*

#include <stdio.h>
int main(void)
{
    int x = 0;
    
    printf("현재의 x는 %d입니다. \n", x);
    x++;
    printf("현재의 x는 %d입니다. \n", x);
    printf("현재의 x는 %d입니다. \n", x--);//출력이 되고 난 다음에 증감이 이루어진다. 
    printf("현재의 x는 %d입니다. \n", x);
    printf("현재의 x는 %d입니다. \n", --x);//빼지고 난 다음에 출력한다. 
    return 0;
}*/


//복합대입연산자 

#include <stdio.h>

int main(void)
{
    int x = 100;
    printf("현재 x의 값은 %d입니다.\n", x);
    x += 50;
    printf("현재 x의 값은 %d입니다. \n", x);
    x -= 50;
    printf("현재 x의 값은 %d입니다. \n", x);
    x *= 50;
    printf("현재 x의 값은 %d입니다. \n", x);
    x /= 50;
    printf("현재 x의 값은 %d입니다. \n", x);
    x %= 3;
    return 0;
}