#include<stdio.h>


main()  {
 double a,b,c;
 
 printf("Lutfen vize notunuzu giriniz\n");
  scanf("%lf",&a);
   printf("Lutfen Final Notunuzu Giriniz\n");
    scanf("%lf",&b);

if(a>100||b>100||a<0||b<0){
printf("Girdiginiz Not Gecerli degildir\n"); 		
}    


else {
// Bu elsenin olay�: e�er ilk if �art� ge�erli olmassa yani notlar istedi�imiz gibi girilir ise 1 k�sm� de�il 2. k�sm� �al��t�racakt�r

c=(a*0.3)+(b*0.7);
 
 
if(c>=60&&b>=50){
printf("Ortalamaniz: %lf\n",c)	;
 printf("Ortalamaniz 60 nin Uzerinde oldugu icin ve final notunuzda 50 nin uzerinde oldugu icin bu dersi gectiniz. TEBRIKLER\n");
		
}
	
else if(c<60||b<50){
printf("Ortalamaniz: %lf\n",c);
 printf("Kaldiniz")	;
 
}

}

}
	

  





	
	
	
	
	

