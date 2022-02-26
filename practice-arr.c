// #include <stdio.h>
// int main(void)
// {
//     int a,b,c;
//     scanf("%d %d %d", &a,&b,&c);
//     int numArr[3] = { a, b, c };
//     printf("{%d %d %d}", numArr[0], numArr[1], numArr[2]);
//     int i;
//     //sizeof(int) 자료형의 크기로 나누어주는 것이 필요하다. 
//     for(i = 0; i < sizeof(numArr)/sizeof(int); i++)
//     {   
//         if(numArr[i]%2 == 0)
//         {
//             printf("%d", numArr[i]);
//         }
//     }
//     // for()
//     return 0;
// }


/*

#include <stdio.h>
int main(void)
{
    long long int a,b,c;
    scanf("%lld %lld %lld", &a,&b,&c);  
    int num[3];
    num[0] = a;
    num[1] = b;
    num[2] = c;
    // int numArr[3] = {a, b, c};
    // printf(numArr[3]);
    for(int i = 0; i < sizeof(numArr)/sizeof(int); i++)
    {
        if(numArr[i]%2 == 0)
        {
            printf("%d", numArr[i]);
        }
    }
    return 0;
}


*/

/*
#include <stdio.h>
int main(void)
{
    long long int a;
    scanf("%lld", &a);
    if(a > 0)
    {
        printf("plus\n");
        if(a % 2 == 0)
        {
            printf("even");
        }
        else if(a % 2 == 1)
        {
            printf("odd");
        }
    }
    else if(a < 0)
    {
        printf("minus\n");
        if(a % 2 == 0)
        {
            printf("even");
        }
        else if(a % 2 == 1)
        {
            printf("odd");
        }
    }
    return 0;
}

*/


// #include <stdio.h>
// int main(void)
// {
//     int utl, sum;
//     scanf("%d", &utl);
//     for(int i = 0; i<= utl; i++)
//     {
//         if(i % 2 == 0) {
//             sum += i;
//         }
//     }
//     printf("%d", sum);
//     return 0;
// }


/*

#include <stdio.h>

int main(void)
{
    char str = 'A';
    do
    {
        scanf("%c", &str);
        printf("%c", str);
    }while(str != 'q');
    
    return 0;
}


*/


/*

#include <stdio.h>
int main(void)
{
    int n, sum =0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        sum += i;
        if(sum >= n)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}

*/



#include <stdio.h>

int main(void)
{
    int a = 10;
    char b = "he";
    printf("%c", a);
    printf("%c", b);
    return 0;
}

