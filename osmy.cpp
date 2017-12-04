# include <iostream.h>

double silnia(double x)
{if (x==1) {return 1;} else
 return silnia(x-1)*x;
}

main()
{
cout<<"Podaj Liczbe  : ";
int liczba;
cin>>liczba;
cout<<"Silnia z liczby "<<liczba<<" wynosi "<<silnia(liczba);
}
