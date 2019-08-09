#include <stdio.h>
/*Program Decimal to Binary*/
int main()
{

    int dec_num, i;
    int binary[16];

    printf("Enter number to be converted :");
    scanf("%d",&dec_num);

    i=0;
    while(dec_num > 0)
    {
       binary[i]  = dec_num % 2;
       i++;
       dec_num /= 2;
    }
    printf("\nBinary number is \n ");
    for(i=i-1; i>=0; i--)
        printf("%d",binary[i]);

    return 0;
}
