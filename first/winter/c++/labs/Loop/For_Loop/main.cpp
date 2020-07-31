#include <iostream>

using namespace std;

int main()
{
  int i, N;
  cout << "Write N number";
  cin >> N;
  for (i = 1; i <= N; i++)
    cout << "Square root of " << i << " " << i * i << endl;
  system("PAUSE");
}
