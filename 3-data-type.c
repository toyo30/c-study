// sizeof()
//int, 정수 float, 실수 double, 실수 초과된 메모리도 표시 char 문자형



#include <stdio.h>
#define MONTHS 12

//달력 변수를 가져오기 위함.

//#inclue <> 라이브러리를 추가하는 부분

int main(void)
{
//    double monthSalary = 1000.5;
//    printf("$ %.2f", monthSalary * MONTHS);
   //$는 뭔가? 
   //char x = 'A';
   char x = 65;
   printf("%c\n", x);
   //내부적으로 숫자로 구성됨. 
   char y = 66;
   printf("%c\n", y);

   char z = 66;
   printf("%d\n", z);



    //int형을 다른 진수로 바꾸기 

    int k = 100;
    printf("10진수로 출력 : %d\n", k);
    printf("8진수로 출력 : %o\n", k);
    printf("16진수로 출력 : %x\n", k);


    return 0;
}
   

