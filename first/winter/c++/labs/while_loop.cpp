#include <iostream>

using namespace std;

int main()
{
  int N;
  int i = 0;
  cout << "Write N number ";
  cin >> N;
  while (N > 0)
  {
    N /= 10;
    i++;
  }
  cout << "This number has got"
       << " " << i << " "
       << "digits";

  system("PAUSE");
}
