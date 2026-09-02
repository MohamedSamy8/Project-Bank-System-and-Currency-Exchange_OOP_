#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsCurrency.h"

using namespace std;

class clsUpdateCurrencyRateScreen : protected clsScreen
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

    static float _ReadRate()
    {
        cout << "\nEnter New Rate : ";
        float NewRate = clsInputValidate::ReadFloatNumber();
        return NewRate;
    }

public:

	static void ShowUpdateCurrencyRateScreen()
	{
        _DrawScreenHeader("\t  Update Currency Screen");

        cout << "\nPlease Enter Currency Code : ";
        string CurrencyCode = clsInputValidate::ReadString();

        while (!clsCurrency::IsCurrencyExist(CurrencyCode))
        {
            cout << "\nCurrency was not found, choose another one : ";
            CurrencyCode = clsInputValidate::ReadString();
        }

        clsCurrency Currency = clsCurrency::FindByCode(CurrencyCode);
        _PrintCurrency(Currency);

        cout << "\nAre you sure you want to update the rate of this Currency  y/n? ";
        char Answer = 'n';
        cin >> Answer;

        if (Answer == 'Y' || Answer == 'y')
        {
            cout << "\n\nUpdate Currency Rate :";
            cout << "\n_______________________\n";

            Currency.UpdateRate(_ReadRate());

            cout << "\nCurrency Rate Updated Successfully :-)\n";
            _PrintCurrency(Currency);
               
        }
	}
};

