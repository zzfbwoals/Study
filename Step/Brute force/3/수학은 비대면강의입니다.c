#include <stdio.h>

int main()
{
    int a,b,c,d,e,f;
    // adx+bdy=cd
    // adx+eay=fa
    // (bd-ea)y=cd-fa
    // y=(cd-fa)/(bd-ea)

    // aex+bey=ce
    // dbx+bey=fb
    // (ae-db)x=ce-fb
    // x=(ce-fb)/(ae-db)

    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    int x = (c*e-f*b) / (a*e-d*b);
    int y = (c*d-f*a) / (b*d-e*a);
    printf("%d %d\n", x, y);
    return 0;
}