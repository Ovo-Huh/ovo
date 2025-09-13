#include<stdio.h>
int main(void)
{
    int length ,volume;
    scanf("%d",&length);

    volume=length*length*length;

    printf("The length of one side of the cube: %d\n",length);
    printf("The volume of the cube: %d\n",volume);

    return 0;
}