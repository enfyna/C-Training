#include<stdio.h>

main() {
int a;

printf("Lutfen Bir Not giriniz\n");
 scanf("%d",&a);	
 
if(a<=100&&a>=85){
	
printf("Bu notun degeri: 5");	
			
}
else if(a<=84&&a>=75){
	
printf("Bu notun degeri: 4");	
			
}
else if(a<=74&&a>=50){
	
printf("Bu notun degeri: 3");	
			
}
else if(a<=49&&a>=30){
	
printf("Bu notun degeri: 2");	
			
}
else if(a<=29&&a>=1){
	
printf("Bu notun degeri: 1");	
			
}
else if(a==0){
	
printf("Bu notun degeri: 0");	
			
}
else if(a<0||a>100){
	
printf("Boyle bir not bulunmamaktadir!");	
			
}

//B�R ALTERNAT�F: BU k�s�m if ko�ullar�n�n en sonuncusunun yan�� k�sm�d�r. Yani oray�da bo� b�rakm�yoruz. 
else {
	printf("Boyle bir sayi bulunmamaktadir!");
	
}



  
	
	
	
	
	
	
	
	
	
	
	
}
