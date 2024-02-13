#include<stdio.h>
typedef struct Manhanttan
{
    int x;
    int y;
}D;
D sum(D p,D q);
int main()
{
    D P,Q,result;
    printf("enter first point:\n");
    scanf("%d%d",&P.x,&P.y);
    printf("enter 2nd point:\n");
    scanf("%d%d",&Q.x,&Q.y);
    result=sum(P,Q);
    printf("M.D=%d",result.x+result.y);
}
D sum(D p,D q)
{
    D t;
    t.x=abs(p.x-q.x);
    t.y=abs(p.y-q.y);
    return t;
}
