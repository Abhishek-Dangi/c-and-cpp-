
//without return type without perameter
#include<stdio.h>
void indore();
void bhopal();
void khargone();

void main()
{
    bhopal();
    khargone();

}
void indore()
{
    printf("come in indore\n");

}
void bhopal()
{
    printf("come in bhopal\n");
    indore();
}
void khargone()
{   indore();
    printf("come in khargone\n");
}