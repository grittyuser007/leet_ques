#include <string.h>

int romanToInt(char* s) {
  int i = 0;
  int intValue = 0;

  while(i < strlen(s))
  {
    switch(s[i])
    {
      case 'I':
        if(s[i+1] == 'V')
        {
          intValue += 4;
          i++;
        }
        else if(s[i+1] == 'X')
        {
          intValue += 9;
          i++;
        }
        else
        {
          intValue += 1;
        }
      break;
      case 'V':
        intValue += 5;
      break;
      case 'X':
        if(s[i+1] == 'L')
        {
          intValue += 40;
          i++;
        }
        else if(s[i+1] == 'C')
        {
          intValue += 90;
          i++;
        }
        else
        {
          intValue += 10;
        }
      break;
      case 'L':
        intValue += 50;
      break;
      case 'C':
        if(s[i+1] == 'D')
        {
          intValue += 400;
          i++;
        }
        else if(s[i+1] == 'M')
        {
          intValue += 900;
          i++;
        }
        else
        {
          intValue += 100;
        }
      break;
      case 'D':
        intValue += 500;
      break;
      case 'M':
        intValue += 1000;
      break;
      default:
      break;
    }
    i++;
  }
  return intValue;
}