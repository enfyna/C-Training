#include<stdio.h>

main() {
	
	
int k,j,i ;
 i=0 ;
  k=1 ;
   j=9 ;
    
    char a,b,c;                                                                         
     a=66;                                     
	  b=67;
       c=68 ;
	printf("Hello World\n") ;
	  printf("Hello\n") ;
    	 printf("%d ve %d ve %d ve %d\n",i,k,k,j) ;
	       printf("%c%c%c\n",a,b,c) ;
	   
	    char x , y;
	     x = 'c' ;
	      y= 'C';
	      printf("%d\n",x) ;
           printf("%d\n",y) ;	      
    	
                                                      //  ASCII Tablosuna g�re 
													  //  67 numara = C numara, 99 numara = c
		
		
		/* C dilinde string veriable si yoktur. Bu y�zden Metimsel bir ifadeyi yazd�r�rken char veri tipinden yard�m al�r�z (Dizi Kullan�r�z).
		char kullan�m�nda tek t�rnak: char k='A' ;
		char ile strink ifade kullan�l�rken �ift t�rnak: char k[20]="Asim Gelisgen" ;
		                                                   printf("%s",k) ;
														                    -EKRANDA Asim Gelisgen YAZACAK- 
														                                                                                	*/		
		
		
		char z,h,t[25]="COMPUTER ENGINEERING"  ;
		  z='K'	;
		  // TEK quote koymam�z�n nedeni: bu c nereden geliyor? bunu bilmiyoruz ilk ba�ta tan�ml� de�il tek t�rnak bize onun ask�� den geldi�ini s�yl�yor.
           h=25 ;
            printf("%d\n",z);
             printf("%c\n",h);
   			  printf("%s\n",t);
   			  
				  // BURADA 3 �RNEKTE MEVCUT
		 
		 
    	float number;
		 number= 1/5;
		  printf("%f\n",number);																																									  
													  
								// Degi�kende kullan�lan say�lar tam say� oldu�u i�in printf 0.000 gibi bir ifade ��kt�.
		float number2;
		 number2= 1.0/5 ;
		  printf("%f\n",number2) ;	
		                        // �imdi istenilen ifade g�sterildi.
		 
		 
		 double number3;
		  number3=57.0/51 ;
		   printf("%.15f\n",number3) ;                      	
							    // doublle degiskeninde print f te g�stermek i�in L VE F harflerini ya da sadece F harfini kullan�r�z. (large float olb)
			
	    float number1;
		 number1=11.0/3;
		  printf("%f\n",number1);
		 	printf("%.3f",number1);
			 					// Ondal�k k�sm� s�n�rlamak i�in % nin yan�na {."say�"} ekliyoruz.			
								// doube > float > integer > char	(s�ralama)	
							    	
	
	
	return 0; 
}
