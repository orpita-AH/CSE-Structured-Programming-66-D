#include<stdio.h>
int main(){
char course[] ="CSE-101";
const char *university ="DUET";
course [0]='E';
printf("Update Course :%s\n",course);
printf("Universiy:%s\n",university);
university="BUET";
printf("New University:%s\n",university);
return 0;




}