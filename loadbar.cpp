#include <iostream>
#include <cstring>
#include <cmath>
#include <unistd.h>
using namespace std;

string input = "";
char loadBar[50];
int barSize = 15;
float percent = 100/barSize;

void setProgress(int prog)
{
  float mult = prog * 0.01;
  int index = floor(barSize * mult);
  memset(loadBar,'-',barSize);
  memset(loadBar,'#',index);
  cout << "[" << loadBar << "]" << prog << "%\r";
  cout.flush();
}

int function()
{
  sleep(0.5);
  setProgress(14);
  sleep(1);
  setProgress(41);
  sleep(5);
  setProgress(76);
  sleep(1);
  setProgress(100);

  cout << endl;
  return 5;
}

void loadFunc()
{
  for(int j = 0; j < barSize; j++)
  {
    loadBar[j] = '-';
  } 
  cout << "Loading..." << endl;
  
  for(int i = 0; i <= barSize; i++)
  { 
    memset(loadBar, '#', i);

    cout << "[" << loadBar << "]" << i*(int)percent << "%\r";
    cout.flush();
    sleep(1);
  }
}

int main()
{
  cout << ">";
  cin >> input;
  while(input != "q")
  {
    if(input == "function")
    {
      cout << function();
    }
    else if(input == "load")
    {
      loadFunc(); 
    }
    cout << endl;
    cout << ">";
    cin >> input;
  }

  return 0;
}
