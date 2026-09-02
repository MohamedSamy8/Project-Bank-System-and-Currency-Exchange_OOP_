#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsCurrency.h"

using namespace std;

class clsFindCurrencyScreen : protected clsScreen
{
    static void _PrintCurrency(clsCurrency& Currency)
    {
        cout << "\nCurrency Card :";
        cout << "\n______________________________\n";
        cout << "\nCountry    : " << Currency.Country();
        cout << "\nCode       : " << Currency.CurrencyCode();
        cout << "\nName       : " << Currency.CurrencyName();
        cout << "\nRate(1$) = : " << Currency.Rate();
        cout << "\n______________________________\n";
    }

    static void _ShowResults(clsCurrency& Currency)
    {
        if (!Currency.IsEmpty())
        {
            cout << "\nCurrency Found :-)\n";
            _PrintCurrency(Currency);
        }
        else
        {
            cout << "\nCurrency was not Found :-(\n";
        }
    }

public:

	static void ShowFindCurrencyScreen()
	{
        system("cls");
        _DrawScreenHeader("\t  Find Cuurency Screen");

        cout << "\nFind By: [1] Code or [2] Name ? ";
        short Answer = 1;
        cin >> Answer;

        if (Answer == 1)
        {
            cout << "\nPlease Enter Currency Code : ";
            string CurrencyCode = clsInputValidate::ReadString();
            clsCurrency Currency = clsCurrency::FindByCode(CurrencyCode);
            _ShowResults(Currency);
        }
        else
        {
            cout << "\nPlease Enter Country Name : ";
            string Country = clsInputValidate::ReadString();
            clsCurrency Currency = clsCurrency::FindByCountry(Country);
            _ShowResults(Currency);
        }
	}
};

