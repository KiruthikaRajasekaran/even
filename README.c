# even
#include <stdio.h>
int main()
{
    int a, b, i, f;
    scanf("%d %d", &a, &b);
    printf("The even numbers are:");
    while (a < b)
    {
        f=0;
        for(i=0;i<a;i++)
        {
            if(a%2==0)
            {
                f=1;
                break;
            }
        }
        if (f==1)
            printf("%d ",a);
		a++;
    }

    return 0;
