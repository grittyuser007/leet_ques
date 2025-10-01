int romanToInt(char* s) {
 int M=1000;
  int C=100;
  int I=1;
  int D=500;
  int V=5;
   int L=50;
   int X=10;
  int count=0;
  for(int i=0;i<strlen(s);i++)
  {  switch(s[i])
  { case 'I':
  if(s[i+1]=='V'){
    count=count+4;
    i++;
    break;
  }
  
  else if(s[i+1]=='X'){
    count=count+9;
    i++;
    break;
  } 
  else
  { count+=I;
  break;}
  case 'V':
  
  {
    count+=V;
    break;}

  case 'X':
  if(s[i+1]=='L'){ count+=40;i++;break;}
  else if(s[i+1]=='C'){ count+=90;i++;break;}
  else{ count+=X; break;}

  case 'L':
  { count+=50;break;}

  case 'C':
  if(s[i+1]=='D'){count+=400;i++;break;}
  else if(s[i+1]=='M'){count+=900;i++;break;}
  else{ count+=C;break;}
   
   case 'D':
   
   {count+=D;break;}

   case 'M':
   count+=M;
   break;
    

  }
    
  } 
  return count; 
}