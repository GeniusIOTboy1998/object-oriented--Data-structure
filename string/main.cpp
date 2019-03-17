#include "string.h"
#include <iostream>

using namespace std;

int main()
{
  String s1("hello"); 
  String s2("world");
    
  String s3(s2);      //执行了一个构造
  cout << s3 << endl;
  
  s3 = s1;    //执行了一个赋值
  cout << s3 << endl;     
  cout << s2 << endl;  
  cout << s1 << endl;      
  
  //return 0; 
}

