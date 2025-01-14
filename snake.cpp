#include<raylib.h>
using namespace std;
int main()
{ 
   cout<< "STARTING THE GAME. . .";
   initWindow(750, 750, "RETRO SNAKE");
   SetTargetFPS(60);

        while(WindowClosed() == false)
        {
            startdraw();

            enddraw();
        }

   closeWindow() 
    return 0;
}