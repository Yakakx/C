#include <stdio.h>

int main(void){
    int year, month, date;
    int leap=0;
    int day=0;
    scanf("%d %d %d",&year, &month, &date);
    if(year%4==0&&(year%100!=0||year%400==0)){
        leap=1;
    }
    for(int i=1; i<month; i++){
        switch(i){
            case(1):case(3):case(5):case(7):case(8):case(10):case(12):day+=31;break;
            case(2):if(leap==1){day+=29;break;}else{day+=28;break;}
            case(4):case(6):case(9):case(11):day+=30;break;
        }
    }
    day+=date;
    printf("%d",day);
}