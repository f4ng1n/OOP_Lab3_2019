#include <cmath>
#include <math.h>
#include "polinom.h"
#include "number.h"
#include "complex.h"
/*template<typename T>
T TPolinom<T>::value(T x)
{
    return (a*x*x+b*x+c);
}
template<typename T>
int TPolinom<T>::roots(T *x)
{
        T d = b*b-4*a*c;

        if (d > 0)
        {
            x[0] = (-b + sqrt(d))/2*a;
            x[1] = (-b - sqrt(d))/2*a;
            return 2;
        }
        if (d == 0)
        {
            x[0] = -b/2*a;
            return 1;
        }
        if (d < 0)
        {
            x[0] = (-b + sqrt(d))/2*a;
            x[1] = (-b - sqrt(d))/2*a;
            return -1;
        }
  }
template<typename T>
ostream& operator << (ostream& os, TPolinom<T>& p)
{
     //bool hasc =fabs(p.c) >= EPSILON;

    if ((p.a > 0) || (p.a < 0))
    {
            os<< p.a<<"x^2";
            if (p.b > 0)
            {
                os << "+" << p.b <<"x";
                if (p.c == 0)
                    os << "";
                if (p.c > 0)
                    os<<"+"<< p.c<<"";
                else
                    os << p.c << "";
            }
            if (p.b < 0)
            {
                os << p.b << "x";
                if (p.c == 0)
                    os << "";
                if (p.c > 0)
                    os<<"+"<< p.c<<"";
                else
                    os << p.c << "";
            }
            if (p.b == 0)
            {
                if (p.c == 0)
                    os << "";
                if (p.c > 0)
                    os<<"+"<< p.c<<"";
                else
                    os << p.c << "";
            }
    }
    if (p.a == 0)
    {
        if ((p.b > 0) || (p.b < 0))
        {
            os << p.b << "x";
            if (p.c == 0)
                os << "";
            if (p.c > 0)
                os<<"+"<< p.c<<"";
            else
                os << p.c << "";
        }
        if (p.b == 0)
        {
            if (p.c == 0)
                os << "";
            if (p.c > 0)
                os<<"+"<< p.c<<"";
            else
                os << p.c << "";
        }

    }
return os;
}*/
