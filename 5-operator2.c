//관계연산자 

/* 
#include <stdio.h>

int main(void)
{
    int x = 50, y = 30;
    
    // x == y 

    printf("x가 y와 같은가? %d\n", x == y);
    printf("x가 y와 다른가? %d\n", x != y);
    printf("x가 y와 큰가? %d\n", x > y);
    printf("x가 y와 작은가? %d\n", x < y);
    printf("x의 값에 y의 값을 넣기 %d\n", x = y);

    int z = 50, k = 50;

    printf("z가 k와 같은가? %d\n", z == k);
    return 0;
}*/


//논리연산자 

/* 
#include <stdio.h>

int main(void)
{
    int x = 50, y = 30;
    printf("x가 y보다 크고 y는 40미만입니까? %d\n", (x > y) && (y < 40));//and
    printf("x가 y보다 작거나 혹은 y가 30입니까? %d\n", (x < y) || (y == 30));//or
    printf("x가 50이 아닙니까? %d\n", x != 50);
    return 0;
}
*/

//조건 연산자 

/*

#include <stdio.h>

int main(void)
{
    int x = 30, y = 50;
    int absoluteX = (x > 0) ? x : -x;
    int max = (x > y) ? x : y;
    int min = (x < y) ? x : y;
    printf("x의 절댓값은 %d입니다. \n", absoluteX);
    printf("x와 y 중에서 최댓값은 %d입니다. \n", max);
    printf("x와 y중에서 최솟값은 %d입니다. \n", min);
    return 0;
}*/


#include <stdio.h>
#include <math.h> // pow() 거듭제곱함수, abs() 절댓값 함수 

int main(void)
{
    double x = pow(2.0, 20.0);//왼쪽의 있는 숫자가 오른쪽 숫자만큼 거듭제곱이 이루어진다. 
    printf("2의 20제곱은 %.0f입니다. \n", x);
    return 0;
}


