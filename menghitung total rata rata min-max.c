#include <stdio.h>

int main (int argc, char const *argv[]){
int bil=0,i=1,bil2=0,max=0,min=999999999999;
float rata;
char kar;
printf("masukan bilangan ke-1 :");
scanf("%d",&bil);
fflush(stdin);
printf("masukan data lagi [y/t] ?\n");
scanf("%c",&kar);

if(bil>max){
    max=bil;
}
else {
    max=max;
}
if(bil<min){
    min=bil;
}
else{
    min=min;
}
i=1;
bil=bil;
max=max;
min=min;
while (kar=='y'){
    i++;
    printf("masukan bilangan ke-%d :",i);
    scanf("%d",&bil2);
    fflush(stdin);
    printf("masukan data lagi [y/t] ?");
    scanf("%c,&kar");

    bil2=bil2;
    if(bil2>max){
        max=bil2;
    }
    else{
        max=max;
    }
    if(bil2<min){
        min=bil2;
    }
    else{
        min=min;
    }
}
bil=bil+bil2;
rata=(float)bil/i;
max=max;
min=min;
printf("\n\n\n jumla :%d\n",bil);
printf("\n\n\n rata-rata :%2.2f \n",rata);
printf("\n\n\n nilai maximum :%d\n",max);
printf("\n\n\n nilai minimum :%d\n",min);
return 0;
}
