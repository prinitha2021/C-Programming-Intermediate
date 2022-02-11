#include <stdio.h>  // printing a chess board

int main()
{
  int i,j,a,b,n;
  printf("Enter n.");
  scanf("%d",&n);
  
  for(i=1;i<=4;i++)
   {for(b=1;b<=n;b++)
     {
    
    for(j=1;j<=8;j++)
       {if(i%2==0)
        
            {
              if(j%2==0)
               {for(a=1;a<=n;a++)
                  printf("*");
                }
                
              else
               {for(a=1;a<=n;a++)
                     printf(" ");
               }
              
            }
      
      
      
         else
        
         {
        
            if(j%2==0)
             {for(a=1;a<=n;a++)
             printf(" ");
              }
              else
              {for(a=1;a<=n;a++)
               printf("*");
              }
              
             
           }
         
       }printf("\n");
     }
      
      printf("\n");
   }
    return 0;
}

