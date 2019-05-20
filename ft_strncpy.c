#include <stdio.h>
#include <string.h>

char    *strncpy(char *dest, const char *src, size_t n)
{
    int i;

    i = 0;
    while (i != n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return(dest);
}

int main () {
   char src[40];
   char dest[12];
  
   memset(dest, '\0', sizeof(dest));
   strcpy(src, "This is tutorialspoint.com");
   strncpy(dest, src, 10);

   printf("Final copied string : %s\n", dest);
   
   return(0);
}