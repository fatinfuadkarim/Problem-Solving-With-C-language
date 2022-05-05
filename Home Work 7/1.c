#include <stdio.h>
#include<string.h>
int main()
{
char s1[80] = “Don’t think there are no solutions to the math”;
char s2[80] = “there are no crocodiles”;
char s3[80] = “because I saw them”;
char s4[80] = “the water is calm”;
char s5[80];
char s6[80] = "";
strcpy(s5,"");
strncpy(s5,s1,12);
strcat(s5, s2);
strcat(s5, " ");
strncat(s6, s3, 8);
strcat(s6,s4);
strcat(s5,s6);
printf("%s",s5)
}
