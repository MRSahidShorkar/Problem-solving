#include <stdio.h>

int main()
{
    int h,m;
    scanf("%d %d", &h, &m);

    //(30*H) - (11/2 * M )

    double f;

    f= (11*m*0.5) - (30*h);

    if (f<0)
    {
        f *= -1 ; 
    }

    if (f<=180)
    {
        printf("%lf",f );

    }
    else
        printf("%lf",360-f);

    return 0;
}
