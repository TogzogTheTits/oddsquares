#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    int limit = 0;
    int test = 0;
    int plus = 0;

    cin >> limit;

    while(test == 0)
    {
        a = 1;
        
        for(int i=0; i < plus; i++)
        {
            b = a + (2 * i);

            cout << b;

            if(i!=plus-1)
            {
                cout << "+";
            }

            c += b;
        }

        if(plus!=0)
        {
            cout << "=" << c << "=" << sqrt(c) << "^2" << endl;
        }

        if(plus == limit)
        {
            test = 1;
        }

        c = 0;

        plus++;

    }
}