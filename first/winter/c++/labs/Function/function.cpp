#include <iostream>

using namespace std;

int A[30], k; //global
int input();
int count(int *np, int *nn, int *n0);
int move(int *pb, int *nb, int *pc, int *nc);
int output(int *pb, int *nb, int *pc, int *nc);
int main()
{
   int ch, B[30], C[30], d = 0, e = 0;
   input();
   do
   {
      int a = 0, b = 0, c = 0;
      cout << "\n\t Menu";
      cout << "\n1. Count +- or 0";
      cout << "\n2. Move + in B,-C";
      cout << "\n3.Output B and C";
      cout << "\n4.Exit";
      do
      {
         cout << "\n Your choice";
         cin >> ch;
      } while (ch < 0 || ch > 4);

      switch (ch)
      {
      case 1:
         count(&a, &b, &c);
         cout << "\n Number of +:" << a << endl;
         cout << "\n Number of -:" << b << endl;
         cout << "\n Number of 0:" << c << endl;
         break;

      case 2:
         move(B, &d, C, &e);
         break;
      case 3:
         output(B, &d, C, &e);
      }
   } while (ch != 4);
   return 0;
}

int input()
{
   int i;
   do
   {
      cout << "\n Number of Element:";
      cin >> k;
   } while (k < 0 || k > 30);
   for (i = 0; i < k; i++)
   {
      cout << "\n A[" << i + 1 << "]=";
      cin >> A[i];
   }

   return 0;
}
int count(int *np, int *nn, int *n0)
{
   int i;
   for (i = 0; i < k; i++)
      if (A[i] > 0)
         (*np)++;
      else if (A[i] < 0)
         (*nn)++;
      else
         (*n0)++;
   return 0;
}
int move(int *pb, int *nb, int *pc, int *nc)
{
   for (int i = 0; i < k; i++)
      if (A[i] > 0)
      {
         *pb = A[i];
         pb++;
         (*nb)++;
      }
      else if (A[i] < 0)
      {
         *pc = A[i];
         pc++;
         (*nc)++;
      }
   return 0;
}
int output(int *pb, int *nb, int *pc, int *nc)
{
   cout << "\n Positive array \n";
   for (int i = 0; i < *nb; i++, pb++)
      cout << *pb << "\t";
   cout << "\n Negative array \n";
   for (int i = 0; i < *nc; i++, pc++)
      cout << *pc << "\t";
   cout << endl;
   return 0;
}
