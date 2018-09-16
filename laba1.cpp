#include <math.h>
#include <iostream.h>
using namespace std;

int main()
{

setlocale(LC_ALL,"Russian");

double x,y,f,a,s;
int k;

cout << "Введите X "; 
   cin >> x;
cout << "Введите Y "; 
   cin >> y;
cout << "Выберите F: 1 - sh(x)" << endl << "2 - x^2" << endl << "3 – exp(x)"; 
   cin >> k;

switch(k)
{
case 1: 
    f=sinh(x); 
    break;
case 2: 
    f=pow(x,2);
    break;
case 3: 
    f=exp(x); 
    break;
default: 
    cout << "Не выбрана функция."; 
    return 1;
}

if (x>y) { 
s = y * sqrt(f) + 3 * sin(x);
return 1;
} else
if (x<y) s = x * sqrt(fabs(f));
else s = pow(fabs(f), double(1/3)) + (pow(x, 3) / y);

cout << "Результат = " << s << endl;

system("pause"); 
return 0;
} 