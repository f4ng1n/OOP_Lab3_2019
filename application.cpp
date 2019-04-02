#include "application.h"
#include <iostream>
#include "number.h"
#include <math.h>
#include "polinom.h"
using namespace std;
TApplication::TApplication(int argc, char **argv) :
    QCoreApplication(argc, argv)
{

}
int TApplication::run()
{
    int ch;
    double koef_d1 = 1, koef_d2 = -2, koef_d3 = 1;
    number koef_c1 = 1, koef_c2 = -2, koef_c3 = 1;
    bool isComplex = false;

    double num;
    TComplex cnum;
    while (true)
    {
        cout << "0 - type input data" << endl;
        cout << "1 - Input data" << endl;
        cout << "2 - Roots" << endl;
        cout << "3 - Value" << endl;
        cout << "4 - Output" << endl;
        cout << "5 - Exit" << endl;
        cout <<">";
        cin >> ch;
        switch(ch)
        {
        case 0:
            int choose;
            cout << "If you want to choose complex numbers, press 1; if you want to select real numbers, press 0"<<endl;
            cin >> choose;
            if(choose ==1)
            {
                isComplex=true;
            }
            else
            {
                isComplex=false;
            }
            break;
        case 1:
                if (isComplex)
                {
                    cout <<"Enter a,b,c: " << endl;
                    cout << ">";
                    cin >> koef_c1 >> koef_c2 >> koef_c3;
                    break;
                }
                else
                {
                    cout <<"Enter a,b,c: " << endl;
                    cout << ">";
                    cin >> koef_d1 >> koef_d2 >> koef_d3;
                    break;
                }
            break;
        case 2:
                if (isComplex)
                {
                    TPolinom<TComplex> C(koef_c1,koef_c2,koef_c3);
                    number *x = new number[2];
                    int num_roots = C.roots(x);
                    if ((num_roots == 2) || (num_roots == -1))
                    {
                        cout <<"Roots:" << x[0] <<"," << x[1] <<endl;
                    }
                    if (num_roots == 1)
                    {
                        cout << "Root:" << x[0]<< endl;
                    }
                }
                else
                {
                    TPolinom<double> R(koef_d1,koef_d2,koef_d3);
                    double *x = new double[2];
                    int num_roots = R.roots(x);
                    if (num_roots == 2)
                    {
                        cout <<"Roots:" << x[0] <<"," << x[1] <<endl;
                    }
                    if (num_roots == 1)
                    {
                        cout << "Root:" << x[0]<< endl;
                    }
                    if (num_roots == -1)
                    {
                        cout << "No roots!" << endl;
                    }
                }
                break;
        case 3:
                    if (isComplex)
                    {
                        TPolinom<TComplex> C(koef_c1,koef_c2,koef_c3);
                        cout <<"Enter x:" << endl;
                        cout << ">";
                        cin >>  cnum;
                        cout << "P("<<cnum<<")="<<C.value(cnum)<<endl;
                    }
                    else
                    {

                        TPolinom<double> R(koef_d1,koef_d2,koef_d3);
                        cout <<"Enter x:" << endl;
                        cout << ">";
                        cin >>  num;
                        cout << "P("<<num<<")="<<R.value(num)<<endl;
                    }
                    break;
          case 4:
                    if (isComplex)
                    {
                        TPolinom<TComplex> C(koef_c1,koef_c2,koef_c3);
                        cout << C << endl;
                    }
                    else
                    {
                        TPolinom<double> R(koef_d1,koef_d2,koef_d3);
                         cout << R << endl;
                    }
            break;
        default:break;
        }
        if (ch == 5)
            break;
    }
    return 0;
}



