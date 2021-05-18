#include <iostream>
#include <conio.h>
#include "Menu.h"

using namespace std;

    Menu *Menu::pInstance = NULL;
    Menu* Menu::Instance()
    {
        if (pInstance == NULL)
            pInstance = new Menu;

        return pInstance;
    }
    Menu::Menu() {}
    void Menu::addMenu(string descript, void(*f)())
    {
        this->items.push_back(menuItem(descript, f));
    }
    void Menu::runMenu()
    {
        for (;;)
        {
            system("CLS");
            for (int i = 0; i < (int)items.size(); i++)
            {
                cout << this->items[i].descript << endl;
            }
            this->runSelection();
        }
    }
    void Menu::runSelection()
    {
        int select;
        cin >> select;
        if (select <= (int)items.size())
            this->items[select - 1].func();
        else
            cout << "That is not a valid selection, please try again" << endl;
        waitKey();
    }
    void Menu::waitKey()
    {
        cout << "Press any key to continue" << endl;
        while (!_kbhit());
        fflush(stdin);
    }
