#include<stdio.h>

// #define SIZE 8
int main()
{
    int amount , note;
    int demo[8] = {2000, 500, 200, 100, 50, 20, 10, 1};
    
    printf("Enter the amount: ");
    scanf("%d", &amount);
    printf("\n");

    for (int i=0; i<8; i++)
    {
        note = amount / demo[i];
        if(note)
        {
            amount = amount % demo[i];
            printf("%d * %d = %d ", note, demo[i], note*demo[i]);
        }
    }

}
