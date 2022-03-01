#include <stdio.h>
#include <math.h>
int main(void)
{
    int a, m, d, n, result= 0;
    int sum, i= 0;
    scanf("%d %d %d", &a,&m,&d, &n);
    if(n > 2)
    {
        sum += 1
        for(i == 3; i < n; i++){
            if(n % 2 == 0) 
            {
            sum += pow(m, n - 2);
            }
            else if(n % 2 == 1) 
            {
            sum += -pow(m, n - 2);
            }
        }

    }
    else if(n <= 2)
    {
        sum += 1
    }

    if(n % 2 == 0)
    {
        result += -pow(m, n - 1);
    } 
    else if(n % 2 == 1)
    {
        result += pow(m, n - 1);
    }

    
    
    return 0;
}