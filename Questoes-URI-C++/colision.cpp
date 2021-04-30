#include <iostream>

using namespace std;

int main()

{
    int N;
    cin >> N;
    
    for (int j = 0; j < N; j++) 
    {
        int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, Rx, Ry;
        cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy >> Rx >> Ry;
        
        if (Rx >= Ax && Rx <= Bx && Rx >= Dx && Rx <= Cx && Ry >= Ry && Ry <= Ry && Ry >= By && Ry <= Cy)
        {
           cout << "1\n"; 
        }
        else cout << "0\n";
    }

    return 0;
}