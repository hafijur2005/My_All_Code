#include <bits/stdc++.h>
using namespace std;
int arr[10] = {0};

void check_balance(int accn)
{
    cout << "Your Current balance is " << arr[accn] << endl << endl;
}
void deposite_money(int accn, int amu)
{
    arr[accn] += amu;
}
void withraw_money(int accn, int amu)
{
    if(arr[accn]==0)
    {
        cout<<"Your Balance is Empty\n";
        return;
    }
    arr[accn] -= amu;
}
void transfer_money(int accn1, int accn2, int amu)
{
    if(arr[accn1]==0)
    {
        cout<<"Your Balance is Empty\n";
        return;
    }
    arr[accn2] += amu;
    arr[accn1] -= amu;
}
int main()
{
    while (1)
    {
        int accn;
        cout << "Inter Your Account Number\n";
        cin >> accn;
        if (accn >= 1 && accn <= 10)
        {
            int service;
            cout << "\nSelect a service\n1. Check Balance\n2. Deposit Money\n3. Withraw Money\n4.Transfer Money\n5. Exit\n\n";
            cin >> service;
            if (service == 1)
                check_balance(accn);
            else if (service == 2)
            {
                int d_money;
                cout << "Inter Deposited Money\n";
                cin >> d_money;
                deposite_money(accn, d_money);
            }
            else if (service == 3)
            {
                int w_money;
                cout << "Inter The Ammunt of Withdraw\n";
                cin >> w_money;
                withraw_money(accn, w_money);
            }
            else if (service == 4)
            {
                int t_money, t_accn;
                cout << "Inter The Account Number Whhere You Can Transfer Money\n";
                cin >> t_accn;
                cout << "Inter The Amount\n";
                cin >> t_money;
                transfer_money(accn, t_accn, t_money);
            }
            else if(service == 4)
                break;
            else 
                cout<<"Invelid Option\n";
        }
        else
            cout << "Invaild Account Number\n";
    }
    return 0;
}