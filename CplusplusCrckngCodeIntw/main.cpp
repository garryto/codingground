#include <iostream>
#include <bitset>

using namespace std;

bool isUniqueString(string strVal);

int main()
{
   //cout << "Hello World" << endl; 

   string strVal = "leonardo";
   
   int numraro = 1 << 26;
   
   cout << std::bitset<32>(numraro) << endl;
   
   bool result = isUniqueString(strVal);
   
   if (result) {
       cout << "True" << endl;
       return 0;
   }

   cout << "False" << endl;
  
   
   return 0;
}

bool isUniqueString(string strVal) {
     int checker = 0;
   for (int i = 0; i < strVal.length(); i++) 
   {
      int val = strVal[i] - 'a';
      if ((checker & (1 << val)) > 0) {
         cout << val << endl; 
         return false;    
      } 
      checker |= (1<<val);
      
   }
   
  return true;  
   
}

