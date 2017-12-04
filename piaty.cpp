# include <iostream.h>
# include <math.h>

main()
{
int ax,ay,bx,by,cx,cy;

float a,b,c,max,m1,m2;

cout<<"Podaj wspolrzedne wierzcholka 1"<<endl;
cout<<"Podaj x :";
cin>>ax;
cout<<"Podaj y :";
cin>>ay;

cout<<"Podaj wspolrzedne wierzcholka 2"<<endl;
cout<<"Podaj x :";
cin>>bx;
cout<<"Podaj y :";
cin>>by;

cout<<"Podaj wspolrzedne wierzcholka 3"<<endl;
cout<<"Podaj x :";
cin>>cx;
cout<<"Podaj y :";
cin>>cy;

a =(((bx-ax)*(bx-ax))  + ((by-ay)*(by-ay)));
b =(((cx-bx)*(cx-bx))  + ((cy-by)*(cy-by)));
c =(((ax-cx)*(ax-cx))  + ((ay-cy)*(ay-cy)));


if ((a>b)&(a>c))
			{
			max=a;
			m1=b;
			m2=c;
			}

if ((b>a)&(b>c))
			{
			max=b;
			m1=a;
			m2=c;
			}

if ((c>b)&(c>a))
			{
			max=c;
			m1=b;
			m2=a;
			}


cout<<endl;
cout<<endl;
cout<<endl;


if (max==(m1+m2))
{
  cout<<"Trojkat jest prostokotny";
} else cout<<"Trojkat nie jest prostokotny";


}

