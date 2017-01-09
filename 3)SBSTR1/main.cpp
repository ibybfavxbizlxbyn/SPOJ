#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    for (int h = 0; h < 1; h++)
    {
        int num;
        int sub;
        cin >> num >> sub;

        bool flag = false;
        for (int i = 0; i < 6; i++)
        {
            if (num % 100000 == sub)
            {
                flag = true;
                break;
            }
            num /= 10;
        }
        if (flag == true)
        {
            cout << 1 << endl;
        } else
        {
            cout << 0 << endl;
        }
    }


    return 0;
}
