#include <stdlib.h>



int main()
{
    
    
    int i;
    int n;
    
    int m;
    int k;
    int sayi=0;
    scanf("%d", &sayi);
    printf("------------\n");
    int nn = sayi*2-3;
    int bb = nn;
    n=1;
    int c = 0;
    int a;
    int b;
    int y;
    for(i=0; i<sayi; i++)   // üst
    {
                printf("%d", sayi);
                a = sayi;         
                for(k=0; k<c; k++)
                {        
                         
                         a--;
                         printf("%d", a);
                                  
                }
                for(y=0; y<nn; y++)
                {        
                         printf("%d", a);
                }
                b=sayi;         
                for(k=0; k<c; k++)
                {        if(a != 1)
                         printf("%d", a);
                         a++;
                         
                                  
                }
                c++; 
                printf("%d", sayi);
                nn-=2;        
                printf("\n");

    }
      nn=1;
    for(i=0; i<sayi-1; i++)  //alt
    {
                printf("%d", sayi);
                a = sayi;         
                c--;
              
                for(k=0; k<c-1; k++)
                {        
                         
                         a--;
                         printf("%d", a);
                                  
                }
                
                //printf("nn: %d", nn);
                for(y=0; y<nn; y++)
                {        
                         printf("%d", a);
                }     
                for(k=0; k<c-1; k++)
                {        if(a != 1)
                         printf("%d", a);
                         a++;
                         
                                  
                }    
                nn+=2;    
                printf("%d", sayi);
                printf("\n");

    }
    /*for(i=0; i<sayi; i++)
    {
                for(m=0; m<n; m++)
                {
                         printf("%d", sayi);
                         
                         for(k=0; k<c; k++)
                         {
                                  a = sayi;
                                  a--;
                                  printf("%d", a);
                                  
                         }
                         c++;
                }             
                printf("\n");
                n++;

    }*/
        
    /*for(i=0; i<sayi +1; i++)
    {
                for(m=0; m<n; m++)
                {
                         printf("%d", sayi);
                          
                                        
                }             
                printf("\n");
                n--;

    }*/
    
    
    getch();
    
}

