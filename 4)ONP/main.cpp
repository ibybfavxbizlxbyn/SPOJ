#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main()
{
    int k;
    cin >> k;
    cin.get();

    for (int i = 0; i < k; i++)
    {
        char expression [400] = {0};
        cin.getline(expression, 400);

        int n;
        for (n = 0; expression[n] != '\0'; n++);

        stack <char> stackActions;

        for (int j = 0; j < n; j++)
        {
            if (expression[j] == '+' || expression[j] == '-' || expression[j] == '/' || expression[j] == '*' || expression[j] == '^')
            {
                stackActions.push(expression[j]);
            } else
            if (expression[j] == ')')
            {
                cout << stackActions.top();
                stackActions.pop();
            } else
            if (expression[j] != '(')
            {
                cout << expression[j];
            }
        }
    }
    return 0;
}
