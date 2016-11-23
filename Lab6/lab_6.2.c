#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
int main(){

char resposta[] = {':','O','h',',',' ','G','r','a','n','d','e',' ','R','o','d','r','i','g','o',' ','\0'},pergunta[100];
int i;

printf("\t\t\t     _                      _______                      _\n");
printf("\t\t\t  _dMMMb._              .adOOOOOOOOOba.              _,dMMMb_\n");
printf("\t\t\t dP'  ~YMMb            dOOOOOOOOOOOOOOOb            aMMP~  `Yb\n");
printf("\t\t\t V      ~ Mb          dOOOOOOOOOOOOOOOOOb          dM        V\n");
printf("\t\t\t          `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'\n");
printf("\t\t\t           `YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'\n");
printf("\t\t\t      __     `YMMM| OP'~ YOOOOOOOOOOOP ~`YO |MMMP'     __\n");
printf("\t\t\t    ,dMMMb.     ~~' OO     `YOOOOOP'     OO `~~     ,dMMMb.\n");
printf("\t\t\t _,dP~  `YMba_      OOb      `OOO'      dOO      _aMMP'  ~Yb._\n");
printf("\t\t\t<MMP'     `~YMMa_   YOOo   @  OOO  @   oOOP   _adMP~'      `YMM>\n");
printf("\t\t\t             `YMMMM\`OOOo     OOO     oOOO'/MMMMP'\n");
printf("\t\t\t     ,aa.     `~YMMb `OOOb._,dOOOb._,dOOO'dMMP~'       ,aa.\n");
printf("\t\t\t   ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb.\n");
printf("\t\t\t  ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM.\n");
printf("\t\t\t  MP'        ~YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP~       `YM\n");
printf("\t\t\t  YMb           ~YMMMM\`OOOOI`````IOOOOO'/MMMMP~           dMP\n");
printf("\t\t\t   `Mb.           `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'\n");
printf("\t\t\t     `'                  `OObNNNNNdOO'                   `'\n");
printf("\t\t\t                           `~OOOOO~'   \n\n\n\n\n\t");

printf("Pergunte ao mestre");



for(i=0;i<=strlen(resposta)-2;i++)
{

    printf("%c", resposta[i]);
    resposta[i] = getch();

}

gets(pergunta);
printf("\t");
for(i=0;i<strlen(resposta);i++){
printf("%c", resposta[i]);
//puts(resposta[i]);
Sleep(400);
}
return 0;
}


