#include <stdio.h>
#include <windows.h>   // WinApi header

int main()
{
	
HANDLE                      m_hConsole;
WORD                        m_currentConsoleAttr;
CONSOLE_SCREEN_BUFFER_INFO  csbi;

int k;
int currentVal;

//retrieve and save the current attributes
m_hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
if(GetConsoleScreenBufferInfo(m_hConsole, &csbi))
    m_currentConsoleAttr = csbi.wAttributes;


//change the attribute to what you like
SetConsoleTextAttribute (
            m_hConsole,
            FOREGROUND_RED |
            FOREGROUND_GREEN);
  
  // you can loop k higher to see more color choices
  for(k = 1; k < 255; k++)
  {
    SetConsoleTextAttribute(m_hConsole, k);
    printf("%3d  %s\n", k, "I want to be nice today!");
  }

//set the ttribute to the original one
SetConsoleTextAttribute (
            m_hConsole,
            m_currentConsoleAttr);

  getchar();  // wait
  return 0;
}