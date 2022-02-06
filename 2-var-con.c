// sizeof()
//int, float, double, char

//what is overflow ?

// 사칙연산 프로그램



#include <stdio.h>
#include <limits.h>
//int_max 불러오기 위함. 

//#inclue <> 라이브러리를 추가하는 부분
//라이브러리를 추가해야 print 사용 가
int main(void)//int라는 자료형 사용함. 점수형을 반환하는 int/void 매계 변수. 
{
    //int x;//int정수형을 의미함. 
    //x = 5;
    //printf("%d", x);
    // %d 인트형을 말함. 
    //printf('%d', x); 작은 따옴표도 안 해줌.
    //printf("변수 x의 에모리 크기는 %d입니다.", sizeof(x));
    //sizeof 메모리크기를 알려줌. 
    

    // int x = 50;
    // float y = 12345677.123451235;
    // double z = 12345677.123451235;
    // printf("x =%d\n", x);
    // printf("y = %.2f\n", y);
    // printf("z = %.2f\n", z);


    // int x = INT_MAX;
    // printf("%d", x);
    // //overflow 한계를 먼어선다는 의미 
    // printf("x+1은 %d입니다.\n", x + 1);
    // //2147483647x+1은 -2147483648입니다.
    // //최대값을 넘어서면 반대값인 최소값을 출력하게 됨. 


    //2 variable

    int x = 10;
    int y = 20;
    printf("x= %d입니다. \n", x);
    printf("y = %d입니다. \n", y);

    
    printf("x + y = %d입니다.\n", x + y);
    printf("x - y = %d입니다.\n", x - y);
    printf("x * y = %d입니다.\n", x * y);
    printf("x / y = %d입니다.\n", x / y);

    return 0;
}
   

