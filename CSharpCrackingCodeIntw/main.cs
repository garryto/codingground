using System.IO;
using System;

class Program
{
    static void Main()
    {
        // Arrays And Strings Cracking The Code Interview
        
        string strValor = "Leonardo";
        
        bool result = isUniqueString(strValor);
        if (result)
        Console.WriteLine("true");
        else
        Console.WriteLine("false");
    }
    
   //Assuming 'a to z' values of the string        
   static bool isUniqueString(string strVal) {
   int checker = 0;
   for (int i = 0; i < strVal.Length; i++) 
   {
      int val = strVal[i] - 'a';
      if ((checker & (1 << val)) > 0) {
        
         return false;    
      } 
      checker |= (1<<val);
      
   }
   
  return true;  
   
}


}
