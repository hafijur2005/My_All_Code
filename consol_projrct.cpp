#include <bits/stdc++.h>
using namespace std;
int balance[10] = {0};
void balance_check(int n)
{
    cout << balance[n];
}
void deposit_money(int n, int a)
{
    balance[n] += a;
}
void withdraw_money(int n, int b)
{
    balance[n] -= b;
}
void transfeer_money(int n, int c, int d)
{
    balance[n] -= c;
    balance[d] += c;
}

int main()
{
    while (1)
    {
        int n;
        cout << "Input the user ID ";
        cin >> n;
        if (n == 01)
        {
            cout << "Select a service" << endl
                 << "1. Balance Check" << endl
                 << "2. Deposit Money" << endl
                 << "3. Withdraw Money" << endl
                 << "4. Transfer Money";
            int o;
            cin >> o;
            if (o == 1)
                balance_check(n);
            else if (o == 2)
            {
                int d_m;
                cout << "Inter the amount of deposite ";
                cin >> d_m;
                deposit_money(n, d_m);
            }

            else if (o == 3)
            {
                int w_m;
                cout << "Inter the amount of Withdraw ";
                cin >> w_m;
                withdraw_money(n, w_m);
            }
            else if (o == 4)
            {
                int t_m, t_ID;
                cout << "Inter the reciver Id ";
                cin >> t_ID;
                if (t_ID >= sizeof(balance))
                {
                    cout << "Invaild reciver ID";
                    return 0;
                }

                cout << "Inter the amount of transfer ";
                cin >> t_m;
                transfeer_money(n, t_m, t_ID);
            }
        }
    }
    return 0;
}