#include <Windows.h>

int main()
{
    system("start www.google.com/"); //This command opens google.com on your default browser.
    //Refer to command prompt "Help" command!
    MessageBoxA(0, "Ran command successfully!", "Success!", MB_TOPMOST);
    return NULL;
}
