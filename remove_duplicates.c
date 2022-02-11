#include<stdio.h> // To remove the duplicates in the string
#include<string.h>
int main()
{
    char str[50];
    int i,j,k;
    printf("enter string");
    scanf("%s",str);
    
    for(i=0;i<strlen(str);i++)
      {  
          while(str[i+1]==str[i])
          {
           for(j=i+2;j<strlen(str);j++)
           {str[j-1]=str[j];
               
           }
           str[j-1]='\0';
          }
          printf("\n%s",str);
      }
      
      for(i=0;i<strlen(str);i++)
       {
           for(j=i+1;j<strlen(str);j++)
            {
                if(str[i]==str[j])
                 {
                     for(k=j;k<strlen(str)-1;k++)
                      {
                          str[k]=str[k+1];
                      }
                      str[k-1]='\0';
                 }
            }
            printf("\nstr=%s",str);
       }
      
      printf("%s",str);
    return 0;
}
