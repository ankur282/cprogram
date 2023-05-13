#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){
char s1[100];
float temp=1,humi=50;
char *temp_str;
char *s2=malloc(sizeof(char)*10);
strcat(s1,"INSERT INTO mytable2 (Temperature,Humidity,Version,Timestamp) VALUES (");
sprintf(s2,"%.1f,%.1f, 1,56);",temp,humi);
//temp_str[0]='0'+temp;
//temp_str[1]='0'+temp;
//strcat(s1,temp_str);
//strcat(s1,(",%f",humi));
//strcat(s1,",1,6)");

strcat(s1,s2);
printf("%s",s1);

}




