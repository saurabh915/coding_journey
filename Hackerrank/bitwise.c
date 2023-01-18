#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int convert(int dn)
{
    int dec =0, i=0, rem;

    while (dn!= 0)
    {
        rem = dn%10;
        dn/=10;
        dec +=rem *pow(2,i);
        ++i;
    }
    

return dec;

}






int main() {
    int n, k;
     int al=0;  
     int anda[50];
     int ora[50];
     int xora[50];
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i+1; j <=n; j++)
        {
           int bi=convert(i);
           printf("%d\n",bi);
           int bj=convert(j);
           printf("%d\t",bj);
           anda[al]= bi & bj;
           printf("%d\t",anda[al]);
           ora[al]=bi|bj;
            printf("%d\t",ora[al]);
           xora[al]=bi^bj;
            printf("%d\n",xora[al]);
           al++;


        }
        
    }
    for (int i = 0; i < al; i++)
    {
       printf("%d  ",anda[i]);
    }
    printf("\n");
    for (int i = 0; i < al; i++)
    {
       printf("%d  ",ora[i]);
    }
    printf("\n");
      for (int i = 0; i < al; i++)
    {
       printf("%d  ",xora[i]);
    }
      printf("\n");
    int max =0;
    for (int z = 0; z < al; z++)
    {
       if (max<anda[z] && anda[z]<k)
       {
           max = anda[z];
       }
      
    }
     printf("%d\n",max);
     int max2 =0;
    for (int m = 0; m < al; m++)
    {
       if (max2<ora[k] && ora[k] <k)
       {
           max2 = ora[m];
       }
       
    }
     printf("%d\n",max2);
    int max3=0;
     for (int n = 0; n < al; n++)
    {
       if (max3<xora[n] && xora[n]<k)
       {
           max3 = xora[n];
       }
       
    }
    printf("%d\n",max3);
     
    return 0;
}
