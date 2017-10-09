#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a;
   char b;
    printf("Press temperature  ");
    scanf("%f",&a);
    printf("Press scale,if you don't known your scale - press 1 ");
    scanf("%s",&b);
        if ((a>=-459) && (a<500000))
        {



      switch(b) {




      case 'c' : case 'C' :
          if (a>=-273)
{

      printf("%.2f C \n%.2f F\n%.2f K \n",a,(a*1.8)+32,a+273); }
      else
        printf("You introduce unreal value, K can't be <0 \n");
      break;
      case 'f':case 'F':
          if (a>=-459)
          {


      printf("%.2f F \n%.2f C\n%.2f K \n",a,(a-32)/1.8,(a-32)/1.8 +273); }
      else
        printf("You introduce unreal value, K can't be <0 \n");
      break;
      case 'k':case 'K':
          if (a>=0)
          {


      printf("%.2f K \n%.2f C\n%.2f F \n",a,a-273,(a-273)*1.8 +32); }
      else
        printf("You introduce unreal value, K can't be <0 \n");
      break;
      default:
        if (b=='1')
    {
           if (a>=-273){
           printf("%.2f C \n%.2f F\n%.2f K \n \n \n",a,(a*1.8)+32,a-273); }
           else
        printf("You introduce unreal value, K can't be <0 \n");
           if (a>=-459) {
           printf("%.2f F \n%.2f C\n%.2f K \n \n \n",a,(a-32)/1.8,(a-32)/1.8 +273);}
           else
        printf("You introduce unreal value, K can't be <0 \n");
           if (a>=0) {
           printf("%.2f K \n%.2f C\n%.2f F \n \n \n",a,a-273,(a-273)*1.8 +32); }
           else
        printf("You introduce unreal value, K can't be <0 \n");
    }
        else printf("You introduce unreal value");
    }
        }

        else printf("You introduce unreal value");




    return 0;         }
