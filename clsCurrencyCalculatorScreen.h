#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsCurrency.h"

using namespace std;

class clsCurrencyCalculatorScreen : protected clsScreen
{
    static void _PrintCurrencyCard(clsCurrency& Currency, string Title = "Currency Card :")
    {
        cout << "\n" << Title;
        cout << "\n______________________________\n";
        cout << "\nCountry    : " << Currency.Country();
        cout << "\nCode       : " << Currency.CurrencyCode();
        cout << "\nName       : " << Currency.CurrencyName();
        cout << "\nRate(1$) = : " << Currency.Rate();
        cout << "\n______________________________\n";
    }

    static float _ReadAmount()
    {
        cout << "\nEnter Amount to Exchange : ";
        float Amount = clsInputValidate::ReadFloatNumber();
        return Amount;
    }

    static clsCurrency _GetCuurency(string Message)
    {
        cout << Message;
        string CurrencyCode = clsInputValidate::ReadString();

        while (!clsCurrency::IsCurrencyExist(CurrencyCode))
        {
            cout << "\nCurrency was not found, choose another one : ";
            CurrencyCode = clsInputValidate::ReadString();
        }

        clsCurrency Currency = clsCurrency::FindByCode(CurrencyCode);
        return Currency;
    }

    static void _PrintCalculationsResults(clsCurrency &Currency1, clsCurrency& Currency2, float Amount)
    {
        _PrintCurrencyCard(Currency1, "Convert From : ");

        float AmountInUSD = Currency1.ConvertToUSD(Amount);

        cout << "\n" << Amount << " " << Currency1.CurrencyCode() << " = " 
            << AmountInUSD << " USD\n";

        if (Currency2.CurrencyCode() == "USD")
        {
            return;
        }
        
        cout << "\nConverting From USD To : \n";

        _PrintCurrencyCard(Currency2, "To : ");

        float AmountInCurrency2 = Currency1.ConvertToOtherCurrency(Amount, Currency2);

        cout << "\n" << Amount << " " << Currency1.CurrencyCode() << " = "
            << AmountInCurrency2 << " " << Currency2.CurrencyCode() << endl;
    }

public:

	static void ShowCurrencyCalculatorScreen()
	{
        char Continue = 'y';

        while (Continue == 'Y' || Continue == 'y')
        {
            system("cls");
            _DrawScreenHeader("\t Currency Calculator Screen");

            clsCurrency CurrencyFrom = _GetCuurency("\nPlease Enter Currency1 Code : ");
            clsCurrency CurrencyTo = _GetCuurency("\nPlease Enter Currency2 Code : ");
            float Amount = _ReadAmount();

            _PrintCalculationsResults(CurrencyFrom, CurrencyTo, Amount);

            cout << "\nDo you want to perform another Calculation? y/n? ";
            cin >> Continue;
        }
	}
};

