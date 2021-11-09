#include <stdlib.h>
#include <stdio.h>



int main()
{
   
    int i;   //for loops
    int k;	 //for loops
    int y;   //for loops
    int c = 0;  //for loops
    int sayi=0;   //user input
    scanf("%d", &sayi);
	int topLayerNum = sayi*2-3;
    int temp_sayi;
	    

    printf("------------\n");
    
    for(i=0; i<sayi; i++)   // top part
    {
                printf("%d", sayi);    // first number of layer    				*--------
                temp_sayi = sayi;         
                for(k=0; k<c; k++)
                {        
                         temp_sayi--;
                         printf("%d", temp_sayi);  // before part of mid layer 	-*-------
                         //getch();         
                }
                for(y=0; y<topLayerNum; y++)
                {        
                         printf("%d", temp_sayi);    // mid part of layer   	--*****--
                         //getch();
                }       
                for(k=0; k<c; k++)
                {        if(temp_sayi != 1)
                         printf("%d", temp_sayi);	// after mid part of layer 	-------*-
                         temp_sayi++;
                         //getch();         
                }
                
                c++; 
                if(sayi != 1)
                {
                	printf("%d", sayi);			// end number of layer   		--------*
				}
                topLayerNum-=2;        
                printf("\n");
                //getch();

    }
    topLayerNum=1;
    for(i=0; i<sayi-1; i++)  // bottom part: same like top part but start from 1 (just reverse of top part)
    {
                printf("%d", sayi);
                temp_sayi = sayi;         
                c--;
              
                for(k=0; k<c-1; k++)
                {         
                         temp_sayi--;
                         printf("%d", temp_sayi);
                                  
                }
                for(y=0; y<topLayerNum; y++)
                {        
                         printf("%d", temp_sayi);
                }     
                for(k=0; k<c-1; k++)
                {	        
						if(temp_sayi != 1)
           		     	printf("%d", temp_sayi);
						temp_sayi++;           
                }   
				 
                topLayerNum+=2;    
                printf("%d", sayi);
                printf("\n");

    }
    
    getch();
    
}

