#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsCurrency.h"

using namespace std;

class clsCurrenciesListScreen : protected clsScreen
{
    static void _PrintCurrencyRecordLine(clsCurrency& Currency)
    {
        cout << setw(8) << left << "" << "| " << left << setw(30) << Currency.Country();
        cout << "| " << left << setw(8) << Currency.CurrencyCode();
        cout << "| " << left << setw(45) << Currency.CurrencyName();
        cout << "| " << left << setw(10) << Currency.Rate();
    }

public:

	static void ShowCurrenciesListScreen()
	{
        vector <clsCurrency> vCurrencies = clsCurrency::GetCurrenciesList();

        string Title = "\t Currencies List Screen";
        string SubTitle = "\t   (" + to_string(vCurrencies.size()) + ") Currency.";

        _DrawScreenHeader(Title, SubTitle);


        cout << setw(8) << left << "" << "\n\t_____________________________________________________________________________________________________\n\n";

        cout << setw(8) << left << "" << "| " << left << setw(30) << "Country";
        cout << "| " << left << setw(8) << "Code";
        cout << "| " << left << setw(45) << "Name";
        cout << "| " << left << setw(10) << "Rate/(1$)";

        cout << setw(8) << left << "" << "\n\t_____________________________________________________________________________________________________\n\n";

        if (vCurrencies.size() == 0)
        {
            cout << "\t\t\t\tNo Currencies Available in the System!";
        }
        else
        {
            for (clsCurrency& C : vCurrencies)
            {
                _PrintCurrencyRecordLine(C);
                cout << "\n";
            }
        }

        cout << setw(8) << left << "" << "\n\t___________________________________________________________________________________________________\n\n";
	}
};

