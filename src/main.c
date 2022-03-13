//create by partha das

#include <stdio.h>

int main() {
    int n,row,col;
    
      printf ("\n————————————————————————————————————————————\n");
    printf ("\t\t\t\t\t\t\t\tParttern type 12 ");
    printf ("\n————————————————————————————————————————————\n\n");
    scanf("%d",&n);
   
   
   
    //parttern = 1 
    printf ("parttern = 1 >>>\n\n");
       for(row=1;row<=n;row++)
       {
            for(col=1;col<=n;col++)
            {
                  if(col==1||row==n||col==row)
            {
                printf ("%d ",col);
            }
            else 
            {
                printf ("  ");
            }
            }
            printf ("\n");
        }
     printf ("\n*********************************************\n\n");
     
     
    //parttern =2 
    printf ("parttern = 2 >>>\n\n");
     for(row=1;row<=n;row++)
       {
            for(col=1;col<=n;col++)
            {
                  if(row==n||col==1||col==row)
            {
                printf ("%d ",row);
            }
            else 
            {
                printf ("  ");
            }
            }
            printf ("\n");
        }
     printf ("\n*********************************************\n\n");
     
     
     //parttern =3 
     printf ("parttern = 3 >>>\n");
      for(row=1;row<=n;row++)
       {
            for(col=1;col<=n;col++)
            {
                  if(row==n||col==1||col==row)
            {
                printf ("%d ",col%2);
            }
            else 
            {
                printf ("  ");
            }
            }
            printf ("\n");
        }
     printf ("\n*********************************************\n\n");
     
     
     
    printf ("parttern = 4 >>>\n\n");
     for(row=1;row<=n;row++)
       {
            for(col=1;col<=n;col++)
            {
                  if(row==n||col==1||col==row)
            {
                printf ("%d ",row%2);
            }
            else 
            {
                printf ("  ");
            }
            }
            printf ("\n");
        }
     printf ("\n*********************************************\n\n");
     
     
     printf ("parttern = 5 >>>\n\n");
      for(row=1;row<=n;row++)
       {
            for(col=1;col<=n;col++)
            {
                  if(row==n||col==1||col==row)
            {
                printf ("%c ",col+64);
            }
            else 
            {
                printf ("  ");
            }
            }
            printf ("\n");
        }
     printf ("\n*********************************************\n\n");
     
     
     
     printf ("parttern = 6 >>>\n\n");
      for(row=1;row<=n;row++)
       {
            for(col=1;col<=n;col++)
            {
                  if(row==n||col==1||col==row)
            {
                printf ("%c ",row+64);
            }
            else 
            {
                printf ("  ");
            }
            }
            printf ("\n");
        }
     printf ("\n*********************************************\n\n");
     
     
     
     printf ("parttern = 7 >>>\n\n");
      for(row=1;row<=n;row++)
       {
            for(col=1;col<=n;col++)
            {
                  if(row==n||col==1||col==row)
            {
                printf ("%c ",col+96);
            }
            else 
            {
                printf ("  ");
            }
            }
            printf ("\n");
        }
     printf ("\n*********************************************\n\n");
     
     
     printf ("parttern = 8 >>>\n\n");
      for(row=1;row<=n;row++)
       {
            for(col=1;col<=n;col++)
            {
                  if(row==n||col==1||col==row)
            {
                printf ("%c ",row+96);
            }
            else 
            {
                printf ("  ");
            }
            }
            printf ("\n");
        }
     printf ("\n*********************************************\n\n");
     
     
     
      printf ("parttern = 9 >>>\n\n");
      for(row=1;row<=n;row++)
       {
            for(col=1;col<=n;col++)
            {
                  if(row==n||col==1||col==row)
            {
                printf ("* ");
            }
            else 
            {
                printf ("  ");
            }
            }
            printf ("\n");
        }
     printf ("\n*********************************************\n\n");
     
      printf ("parttern = 10 >>>\n\n");
      for(row=1;row<=n;row++)
       {
            for(col=1;col<=n;col++)
            {
              if(row==n||col==1||col==row)
            {
                printf ("$ ");
            }
            else 
            {
                printf ("  ");
            }
            }
            printf ("\n");
        }
     printf ("\n*********************************************\n\n");
     
    printf ("Create by Partha Das");
}
