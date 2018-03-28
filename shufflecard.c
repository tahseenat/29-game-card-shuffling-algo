
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lower = 0, upper = 31, count = 16,i,j,k,num,scount=0,check[32];;
    char cardno[10]={'7','8','9','0','A','J','Q','K'},cardtype[4]={'S','H','D','C'};
    char shuffledcard[32][2];
    for(i=0;i<32;i++)
        check[i]=1;
        printf("the card has two character in it, in which first char tells\nwhether the card is spade,heart,diamond or club\nand other tell about the card type\n");
        printf("\nnotation for first char is as follows\n\n");
        printf("S for spade\nH for heart\nD for diamond\nC for club\n");
        printf("\nnotation for sec char is as follows\n");
        printf("\n0 for 10\nA for ace\nJ for jack\nQ for Queen\nK for King\n");
        printf("card for respected player are as follows\n\n\n");
    srand(time(0));
    count=32;
    for (i = 0; i < 16;)
        {
             num = (rand() + lower) % (upper + 1);
            if(check[num]!=0)
            {
                check[num]=0;
                shuffledcard[i][0]=num/8;
                shuffledcard[i][1]=num%8;
                i++;
            }
        }
           for (i = 16; i < count;)
        {
             num = (rand() + lower) % (upper + 1);
            if(check[num]!=0)
            {
                check[num]=0;
                shuffledcard[i][0]=num/8;
                shuffledcard[i][1]=num%8;
                i++;
            }
        }

        printf("\nplayer 1 card:  ");
       for(i=0;i<32;i=i+4)
            printf("%c%c ",cardtype[shuffledcard[i][0]],cardno[shuffledcard[i][1]]);

         printf("\n\nplayer 2 card:  ");

       for(i=1;i<32;i+=4)
            printf("%c%c ",cardtype[shuffledcard[i][0]],cardno[shuffledcard[i][1]]);


         printf("\n\nplayer 3 card:  ");

       for(i=2;i<32;i+=4)
            printf("%c%c ",cardtype[shuffledcard[i][0]],cardno[shuffledcard[i][1]]);


         printf("\n\nplayer 4 card:  ");

       for(i=3;i<32;i+=4)
            printf("%c%c ",cardtype[shuffledcard[i][0]],cardno[shuffledcard[i][1]]);

            printf("\n");
    //getch();
    return 0;
}
