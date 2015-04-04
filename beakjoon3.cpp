#include <iostream>
#include <cmath>
using namespace std;         

	Double x1 = 0, y1 = 0, r1 = 300;
        Double x2 = 0, y2 = 400, r2 = 200;

        Double D = 0, X = 0, Y = 0;
        Double T1 = 0, T2 = 0, T3 = 0, T4 = 0, T5 = 0, T6 = 0;
          
        X = x2 - x1;
        Y = y2 - y1;
            
	D = Math.Sqrt((X * X) + (Y * Y));

	T1 = Math.Acos((r1 * r1 - r2 * r2 + D * D) / (2 * r1 * D));
        T2 = Math.Atan(Y / X);

        T3 = x1 + r1 * Math.Cos(T2 + T1);
       	T4 = y1 + r1 * Math.Sin(T2 + T1);

        T5 = x1 + r1 * Math.Cos(T2 - T1);
        T6 = y1 + r1 * Math.Sin(T2 - T1);
           
        cout << "(x,y)  = ({" << T3 << "},{" << T4 << "})";
        cout << "(x',y')  = ({" << T5 <<"},{" << T6 << "})"<< endl;
