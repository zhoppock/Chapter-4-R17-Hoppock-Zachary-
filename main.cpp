// Hoppock, Zachary
// forToWhile.cpp
// Oct. 11, 2020
// Changing a previously for loop into a normal while loop
// Version # 1
#include <iostream>

using namespace std;
int main()
{
int s = 0;
int i = 1;
while (i <= 10)
{
  s = s + i;
  i++;
}

cout << s;
return 0;
}