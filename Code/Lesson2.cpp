#include<stdio.h>
 main() {
 	
 int k;
  char j;
   char h[20]	;
    float g; 
     double f;
       

   printf("Bir karakter giriniz\n");
    printf("\a");
    scanf("%c",&j);
	 printf("Bir metin giriniz\n");
	  scanf("%s",&h);
	   printf("Bir ondalikli sayi giriniz l�tfen\n");  
        scanf("%f",&g);   
        // G�r�ld��� �zere scanf bir veri alma operat�r�d�r ve bu fonksiyonda printf den farkl� olarak "&" i�areti yer al�r. Bunun sebebi bu i�aret vas�tas�yla ram bellek...
        //...�zerinde belirlenen degi�kenin yeri bulunur (pointer). �nceden belirledi�imiz de�i�kebleri scanf sayesinde kendi istedi�imiz terimlere tan�mlad�k. �imdi ise bunlari yazdiral�m.
  
 
   printf("%c\n",j);
    printf("%s\n",h);
	 printf("%f\n",g);
    
   
 	
 	
 }
