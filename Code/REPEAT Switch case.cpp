#include<stdio.h>

main(){
int c,d,e;

printf("Girilen Yas araliginin hangi insan tipine ait oldu�unu gosteren programimiza Hos Geldiniz\nLutfen Bir yas aral�g� seciniz\n*****YAS ARALIGLARI*****");
 printf("\n1) 0 - 18\n2) 18 - 50\n3) 50 - ++\n");
  scanf("%d",&d);
   
switch(d) {
 case 1: {
 printf("Girilen 0-18 yas araligi cocukluk d�nemini kapsamaktadir");	
 break; 
 }  
 case 2: {
 printf("Girilen 18-50 yas araligi genclik ve yetisginlik d�nemini kapsamaktadir");	
 break;
 }
 case 3: {
 printf("Girilen 50-++ yas araligi yaslilik d�nemini kapsamaktadir");	
 break;
 }
 default : {
 printf("L�tfen Belirlenen aralikta islem sayisi giriniz ");
 break;
}
 	
}
 
}
