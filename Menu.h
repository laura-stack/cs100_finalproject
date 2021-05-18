#ifndef MENU
#define MENU

#include <string>
#include <vector>

using std::string;
using std::vector;

    struct menuItem
    {
        void(*func)();
        string descript;
        menuItem(string d, void(*f)()) { this->descript = d; this->func = f; }
    };
    class Menu
    {
    private:
        vector<menuItem> items;
        void runSelection();
        static Menu *pInstance;
    public:
        Menu();
        void addMenu(string descript, void(*f)());
        void runMenu();
        void waitKey();
        static Menu *Instance();
    };

#endif
