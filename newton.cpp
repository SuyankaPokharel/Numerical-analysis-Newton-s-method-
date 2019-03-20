/*Suyanka Pokharel
Numerical Analysis
Problem solving using Newton's method
*/
#include <bits/stdc++.h>
#define p1 -1.73896
using namespace std;
double f(float x)
{
double f = 2*x*x*x*x-3*x*x*x + 3*x-4;
return f;
}
void secant(float x1, float x2, float TOLE)
{
double n = 0, xm, x0, c;
double Absolute_error;
double Relative_error;
if (f(x1) * f(x2) < 0)
{
do
{
x0 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1)); // calculates the intermediate value
c = f(x1) * f(x0); // checking if x0 is root of equation or not
x1 = x2; // updates the value of interval
x2 = x0;
n++;
if(c==0)
break;
xm=(x1 * f(x2) - x2 * f(x1)) / (f(x2) -f(x1));
}
while (fabs(xm-x0) >= TOLE);
Absolute_error=abs(p1-x0);
Relative_error=abs((p1-x0)/p1);
cout<< "Root of the given equation is :-\n" << x0<<endl;
cout<< "Total Number of iterations are :-\n " <<n<<endl;
cout<< "The Absolute error is :-\n"<<Absolute_error<< endl;
cout<< "The relative error is :-\n"<<Relative_error<<endl;
}
else
cout<<"Root cannot be found"<<endl;
}
int main()
{
double x1=-2,x2=-1, TOLE= 0.001;
secant(x1,x2,TOLE);
return 0;
}
