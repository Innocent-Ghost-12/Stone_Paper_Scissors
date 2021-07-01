#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int comppoints, playerpoints;
char comp,move;

int randomnum(int n){
srand(time(NULL));
return rand()%n;
}

char compmove(){
int z = randomnum(3);
switch (z)
{
case 0:
    comp = 's';
    printf("----->CPU chooses Stone\n");
    break;
case 1:
    comp = 'p';
    printf("----->CPU chooses Paper\n");
    break;
case 2:
    comp = 'q';
    printf("----->CPU chooses Scissors\n");
    break;

default:
    printf("----->Error\n");
    break;
}
return comp;
}



char playermove(){
int i;
char move;
printf("Choose your move(Enter 1,2,3)\n1. Stone;\n2. Paper:\n3. Scissors\n");
scanf("%d",&i);
switch (i)
{
case 1:
    move = 's';
    printf("----->You choosed Stone\n");
    break;
case 2:
    move = 'p';
    printf("----->You choosed Paper\n");
    break;
case 3:
    move = 'q';
    printf("----->You choosed Scissors\n");
    break;
default:
printf("----->playermove error\n");
    break;
}
return move;
}




int main(){
char name[20];
printf("Enter your name :\t");
scanf("%s",&name);

for (int i = 0; i < 3; i++)
{    
    char move = playermove();
    char comp = compmove();
    if (move == 's' && comp == 'p')
    {
        printf("**********Computer wins**********\n");
        comppoints++;
    }
    else if (move == 'p' && comp == 's')
    {
        printf("**********%s wins**********\n",name);
        playerpoints++;
    }
    else if (move == 's' && comp == 'q')
    {
        printf("**********%s wins**********\n",name);
        playerpoints++;
    }
    else if (move == 'q' && comp == 's')
    {
        printf("**********Computer wins**********\n");
        comppoints++;
    }
    else if (move == 'p' && comp == 'q')
    {
        printf("**********Computer wins**********\n");
        comppoints++;
    }
    else if (move == 'q' && comp == 'p')
    {
        printf("**********%s wins**********\n",name);
        playerpoints++;
    }
    else if (move == comp)
    {
        printf("**********It is a draw**********\n");
    }
    else{
        printf("**********missing condition**********\n");
    }
    
}

if ( playerpoints > comppoints )
{
    printf("**********%s Wins The Round**********\n",name[40]);
}
else{
    printf("**********%s Wins The Round**********\n",name[40]);
}

return 0;

}