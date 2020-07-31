#include <iostream>

using namespace std;

int main()
{
    int N, i = 0;

    do
    {
        cout << "Write real number";
        cin >> N;
    } while (N <= 0);
    while (N > 0)
    {
        i += N % 10;
        N /= 10;
    }
    cout << "Sum of this number equals"
         << " " << i << endl;
    system("PAUSE");
}
