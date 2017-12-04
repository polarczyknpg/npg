    #include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
cout << " O" <<endl
<< "/I\\" << endl
<< " I" << endl
<< "/^\\" << endl;
Sleep(1000);
system("cls");
for(string a; 1; a +="\t")
{
cout << a <<"\t O" <<endl
<< a <<"\t/I\\" << endl
<< a <<"\t I" << endl
<< a <<"\t/^\\" << endl;
Sleep(1000);
system("cls");
}
return 0;
}
