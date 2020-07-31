#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int sum = 0;
    int count = 0;
    int mynum[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        mynum[i] = rand() % 20;
        cout << mynum[i] << endl;
    }

    for (int i = 0; i < 10; i++)
    {

        if (mynum[i] % 2 == 0)
            sum = sum + mynum[i];
        if (mynum[i] % 5 == 0)
            count++;
    }
    cout << "The sum of even numbers " << sum << " and the count of numbers " << count << endl;
    system("PAUSE");
    return 0;
}
