#include <iostream>

using namespace std;

int main()

{
      char animal;

      cout << "Write first letter ";

      cin >> animal;

      switch (animal)
      {
      case 'a':
            cout << "Antelope" << endl;
            break;
      case 'b':
            cout << "Bear" << endl;
            break;
      case 'c':
            cout << "Cat" << endl;
            break;
      case 'd':
            cout << "Dolphin" << endl;
            break;
      default:
            cout << "I don't know animals with this letter" << endl;
      }

      system("PAUSE");
}
