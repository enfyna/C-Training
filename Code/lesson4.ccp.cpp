#include<stdio.h>

main(){
// KAR�ILA�TIRMA OPER�TERLER�N�N �E��TLER�

int a,b,c,d;
a=10;
b=10;
c=15;
d=20;
printf("%d %d %d\n",a==b,b==c);	
 printf("%d %d %d %d\n\n",c!=d,a<b,b>d,c<=d);

// LOGICAL OPERATIONS
 
 int average,final;
 bool deger=1; 
  printf("Final notunu griniz: ");
   scanf("%d",&final);
    printf("Ortaman�z� giriniz: ");
     scanf("%d",&average);
     
	  printf("%d\n",final>60&&average>70);
       printf("%d\n",final>80&&average>70);
        printf("%d\n",final>64||average>70); 
		 printf("%d\n",final>66||average>70);
		  printf("NOT: 1=GECTINIZ 2=KALDINIZ\n\n");
	       
		   printf("%d",!deger);	  
         


	
	
	
	
	
	
	
	
	
}
