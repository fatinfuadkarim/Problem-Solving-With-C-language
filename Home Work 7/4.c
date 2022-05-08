#include <stdio.h>
#include <string.h>

int main( )
{
        char str[100];
        char vowel[] = {'a','e','i','o','u'};
        puts("Enter String :");
        gets(str);

    for(int i=0;i<strlen(str);i++) 
      for(int j=0;j<5;j++)
        if(str[i]==vowel[j])
         str[i]='#';

  puts("modified string: ");
  puts(str);
        
	return 0;
}

