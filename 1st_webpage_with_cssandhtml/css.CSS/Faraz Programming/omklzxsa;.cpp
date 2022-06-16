#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main(){
    SetCursorPos(100, 400);
    for(int i=0; i<200000; ++i)
    {
    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);}
    return 0;
}    
