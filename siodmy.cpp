#include<iostream.h>
#include<math.h>

int pierwsza(int liczba)
 {
int licznik,wynik=1;
liczba=abs(liczba); //modul liczby

if (liczba!=2) {

	 for (licznik=2;licznik<liczba-1;licznik++)
	 {  if (liczba%licznik==0) {wynik=0;}  }

					} else wynik=0;
return wynik;
 }


main()
{
int l1,l2;
cout<<"Podaj liczbe 1 : ";
cin>>l1;
cout<<"Podaj liczbe 2 : ";
cin>>l2;
int licznik=0;
for (int i=l1;i<=l2;i++)
	 {
	 if (pierwsza(i)==1){licznik++;}
	 }

cout<<"liczb pierwszych w podanym zakresie jest : "<<licznik;
}
