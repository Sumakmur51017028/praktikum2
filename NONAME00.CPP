#include <iostream.h>
#include <conio.h>
float z = 9.0;
int i =10;
void tampilkan_lagi(void);
main()
{
float p = 2.0;
cout << i << " " << p << " " << z << "\n";
tampilkan_lagi();
getch();
}
void tampilkan_lagi(void)
{
int j = 5.0;
cout << j << " " << z << "\n";
//cout << p << "n";
return;
getch();
}