# include <iostream.h>
# include <stdlib.h>


main()
{

randomize();


const size=9;   // wielkosc tablicy - ilosc liczb


int lp=0;//liczby parzyste
int pp=0;//liczby pierwsze
int ld=0;//liczby dodatnie
int l32=0;//liczby podzielne przez trzy i dwa

int g=1;

for (int a,i=0;i<size;i++)
	 {
	 a=random(10)+1;
	 cout<<a<<"\t";
	 if (a%2==0)lp++;
	 if ((a%2==0)&(a%3==0)) l32++;

	 if (a!=2) {
	 for (int j=2;j<a-1;j++) {if (a%j==0) {g=0;}}
	 if (g==1){pp++; cout<<"["<<a<<"]";}
	 g=1;
				 }
	 }
cout<<endl;
cout<<"Liczb parzystych jest :"<<lp<<endl;
cout<<"Liczb nieparzystych jest :"<<size-lp<<endl;
cout<<"Liczb podzielnych przez 3 i 2 jest :"<<l32<<endl;
cout<<"Liczb pierwszych jest :"<<pp<<endl;

}
