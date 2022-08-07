#include<stdio.h>
void main()
{
    int gs , da, ta, ns, pf, basic;
    printf("give basic sallry :\n");
    scanf("%d",&basic);

    ta = basic*10/100;
    pf = basic*7.8/100;
    da = 500;
    gs = basic+da+ta;
    ns = gs-pf;
    printf("gross sallry is gs:%d\n",gs);
    printf("net sallry is ns:%d\n",ns);

    
}