#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"
//seumegni tchapda arthur cadren 20W2176
int main()
{

    int n,m;
    STAC:printf("entrer le nombre de colones\n");
    scanf("%d",&n);
    printf("entrer le nombre de ligne\n");
    scanf("%d",&m);

    float a[n][m];
    if(n==m)
    {
   enter(n,m,a);
    printf("\n");
   print(n,m,a);
   nature(n,m,a);

   float b[m];
   systeme(n,m,b,a);

     pivaut_de_gauss(n,m,a);
     solution_matrice(n,m,b,a);
    }
    else
    {
        printf("HEU RECOMENCER\n");
    goto STAC;

    }

    return 0;
}

/*
void enter(int n,int m,int a[n][m])
{
    int i,j;
    for(i=1;i<=n;i++)
     {
        for(j=1;j<=m;j++)
        {
          printf("entre %d,%d de la matrice  :",i,j);
          scanf("%d",&a[i][j]);
        }
     }
}


void nature(int n,int m,int a[n][m])
{
    int i,j,trap=0,count=0,it1=0,count_ze=0;

    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            trap++;
          if(a[i][j]==0)
          {
            count++;
          }
        }
    }

    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=m;j++)
        {
           it1++;
           if(a[i][j]==0)
           {
               count_ze++;
           }
        }
    }
    if(trap==count&&it1!=count_ze)
    {
        printf("triangulaire \n");
    }
    else if(trap!=count&&it1==count_ze)
    {
        printf(" matrice triangulaire supérieur \n");
    }
    else if(trap==count&&trap==count_ze)
    {
        printf("matrice diagonal \n");
    }
    else{
        printf("matrice quelconque\n");
    }
}

/*affichage de la matrices */
/*void print(int n,int m,int a[n][m])
{
    int i,j;
    printf("your matrix is :\n");
    for(i=1;i<=n;i++)
    {
        printf("(");
        for(j=1;j<=m;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf(" )\n");
    }
}

/*3.b AX=B*/
/*void systeme(int n,int m,int b[m],int a[n][m])
{
    int i,j;
    printf("ENtrez la valeur du vecteur \n");

    for(j=1;j<=m;j++)
    {
        printf("entrez la valeur  %d de la matrice :",j);
          scanf("%d",&b[j]);
    }
     printf("matrices vecteur:\n");
     for(i=1;i<=n;i++)
    {
        printf("(");
        for(j=1;j<=m+3;j++)
        {
            if(j==m+1)
            {
                printf(")(x%d)",i);
            }
            else if(j==m+2)
            {
                printf("  ");
                if(i==2)
                {
                    printf("=");
                }
            }
            else if(j==m+3)
            {
                printf("(%2d",b[i]);
            }
            else{
              printf("%4d",a[i][j]);
            }
        }
        printf(" )\n");
    }
}









void pivaut_de_gauss(int n,int m,int a[n][m])
{
  int i,j,k=1;
  float c,d[n][m];

  for(j=1;j<=n;j++)
  {
      for(i=1;i<=n;i++)
      {
          if(i!=j)
          {
              c=a[i][j]/a[j][i];

              for(k=1;k<=n+1;k++)
              {
                  d[i][k]=a[i][k]-(c*a[j][k]);
              }
          }
      }
   }

   for(i=1;i<=n;i++)
   {
       for(j=1;j<=m;j++)
       {
          printf("%3d",d[i][j]);
       }
   }

  printf("\n elimination done\n");
  }
 void solution_matrice(int n,int m,int b[m],int a[n][m])
  {
  	int i=1;
      float x[n];
      printf("votre solution est:\n");

      for(i=1;i<=n;i++)
      {

          x[i]=a[i][n+1]/a[i][i];
          printf("x%d=%f\n",i,x[i]);

      }
  }



