#include<stdio.h>
#include<math.h>
#include<locale.h>
main() {

setlocale(LC_ALL,"Turkish");	
printf("Bildi�iniz gibi enflasyanla m�cadele kapsam�nda temel g�da �r�nlerindeki KDV miktar� Y�ZDE 8 oran�ndan Y�ZDE 1 oran�na  d���r�ld�.Bu de�i�iklikten meydana gelen verileri inceleyelim\n");

float a,b,c,d,f;

printf("L�tfen Bir temel g�da �r�n�n�n yeni d�zenlemeden �nceki market fiyat�n� giriniz\n");
 scanf("%f",&a);
  b=a*8/100;
  c=a*7/100;
  d=a/100;
  f=a-c;
printf("Yeni D�zenlemeye g�re bu �r�n�n yeni fiyat�: %f\n", f);
printf("Yeni D�zenlemeye g�re bu �r�ndeki net KDV de�eri: %f\n ", d);   
printf("Yeni D�zenlemeye g�re bu �r�nden net kazanc�n�z: %f\n", c );




	
	
	
	
	
	
	
	
}
