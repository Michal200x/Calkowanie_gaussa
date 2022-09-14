#include <iostream>
#include <math.h>

using namespace std;

double fsin(double x)
{
    return sin(x);
}
double f(double x)
{
    return x * x + 2 * x + 5;
}
double fexp(double x)
{
    return exp(x);
}

double CKW2sin(double a, double b, double n)
{
    double z = 0.0;
    double s = (b - a) / 2;
    double x[2] = { -0.57735, 0.57735 }, A[2] = { 1, 1};
    for (int i = 0; i < n; i++)
    {
        double t = (a + b) / 2 + ((b - a) / 2) * x[i];
        z += A[i] * fsin(t);
    }
    double C = s * z;
    return C;
}
double CKW2f(double a, double b, double n)
{
    double z = 0.0;
    double s = (b - a) / 2;
    double x[2] = { -0.57735, 0.57735 }, A[2] = { 1, 1 };
    for (int i = 0; i < n; i++)
    {
        double t = (a + b) / 2 + ((b - a) / 2) * x[i];
        z += A[i] * f(t);
    }
    double C = s * z;
    return C;
}
double CKW2exp(double a, double b, double n)
{
    double z = 0.0;
    double s = (b - a) / 2;
    double x[2] = { -0.57735, 0.57735 }, A[2] = { 1, 1 };
    for (int i = 0; i < n; i++)
    {
        double t = (a + b) / 2 + ((b - a) / 2) * x[i];
        z += A[i] * fexp(t);
    }
    double C = s * z;
    return C;
}
double CKW4sin(double a, double b, double n)
{
    double z = 0.0;
    double s = (b - a) / 2;
    double x[4] = { -0.861136, -0.339981, 0.339981, 0.861136 }, A[4] = { 0.347855, 0.652145, 0.652145, 0.347855 };
    for (int i = 0; i < n; i++)
    {
        double t = (a + b) / 2 + ((b - a) / 2) * x[i];
        z += A[i] * fsin(t);
    }
    double C = s * z;
    return C;
}
double CKW4f(double a, double b, double n)
{
    double z = 0.0;
    double s = (b - a) / 2;
    double x[4] = { -0.861136, -0.339981, 0.339981, 0.861136 }, A[4] = { 0.347855, 0.652145, 0.652145, 0.347855 };
    for (int i = 0; i < n; i++)
    {
        double t = (a + b) / 2 + ((b - a) / 2) * x[i];
        z += A[i] * f(t);
    }
    double C = s * z;
    return C;
}
double CKW4exp(double a, double b, double n)
{
    double z = 0.0;
    double s = (b - a) / 2;
    double x[4] = { -0.861136, -0.339981, 0.339981, 0.861136 }, A[4] = { 0.347855, 0.652145, 0.652145, 0.347855 };
    for (int i = 0; i < n; i++)
    {
        double t = (a + b) / 2 + ((b - a) / 2) * x[i];
        z += A[i] * fexp(t);
    }
    double C = s * z;
    return C;
}

int main()
{
    double a, b, n;
    cout << "Podaj przedzial [a, b]" << endl << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "Podaj liczbe n wezlow: ";
    cin >> n;
    if (n == 2) {
        cout << endl << "dla dwoch wezlow sin(x): " << CKW2sin(a, b, n) << endl;
        cout << "dla dwoch wezlow (x^2 + 2x + 5): " << CKW2f(a, b, n) << endl;
        cout << "dla dwoch wezlow exp(x): " << CKW2exp(a, b, n) << endl;
    }

    if(n == 4){
    cout << endl << "dla czterech wezlow sin(x): " << CKW4sin(a, b, n) << endl;
    cout << "dla czterech wezlow (x^2 + 2x + 5): " << CKW4f(a, b, n) << endl;
    cout << "dla czterech wezlow exp(x): " << CKW4exp(a, b, n) << endl;
    }
}
