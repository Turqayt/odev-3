
#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

int main() {

	int satir;
	int sutun;

	cout << "satir....:";
	cin >> satir;
	/*satir sayisi 5 ile 15 (5 ve 15 dahil)arasi olamlidi eger yanlis girilirse tekrar istiyor*/
	for (; satir < 5 || satir>15;)
	{
		cout << "satir numarasi hatali.... Tekrar Deneyin...." << endl;
		cout << "satir....:";
		cin >> satir;
	}

	cout << "sutun....:";
	cin >> sutun;
	/*sutun sayisi 5 ile 40 (5 ve 40 dahil)arasi olmalidir eger yanlis girilirse tekrar istemeli */
	for (; sutun < 5 || sutun>40;) 
	{
		cout << "sutun numarasi hatali.... Tekrar Deneyin...." << endl;
		cout << "sutun....:";
		cin >> sutun;
	}
	/*satir degeri sutun degerinin iki kati olmalidir eger yanlis girilirse tekrar satir ve sutun istemeli istemeli*/
	for (; sutun != 2 * satir;) 
	{
		cout << "sutun sayisi satir sayisinin iki kati olmalidir.... Tekrar Deneyin...." << endl;
  		cout << "satir....:";
		cin >> satir;
		/*eger yine satir yanlis girilirse satir tekrar girilmelidir */
		for (; satir < 5 || satir>15;)
		{
			cout << "satir numarasi hatali.... Tekrar Deneyin...." << endl;
			cout << "satir....:";
			cin >> satir;
		}

		cout << "sutun....:";
		cin >> sutun;
		/*eger yine sutun yanlis girilirse sutun tekrar istenmeli*/
		for (; sutun < 5 || sutun>40;)
		{
			cout << "sutun numarasi hatali.... Tekrar Deneyin...." << endl;
			cout << "sutun....:";
			cin >> sutun;
		}
	}
	//ilk satiri sutun sayisi kadar yazacaktir
	for (int a = 0; a < satir; a++)
	{
		if (a == 0)
		{
			for (int a = 0; a < sutun; a++)
			{
				cout << "*";
			}
		}
	}
	Sleep(100);
    	cout << endl;

		int bosluk=1;
		//ilk ve son satir aralarindaki 4 yildiz bosluklar azalarak yazilacaktir
	   for (int a = 2; a < sutun / 2; a++) 
	   {
			cout << "*" << setw(sutun / 2 - a) << "*" << setw(2 * bosluk + 1) << "*" << setw(sutun / 2 - a) << "*" << endl;
			bosluk++;
			Sleep(100);
	   }
	   //Son satir sutun sayisi kadar yazilacaktir
	   for (int a = 0; a < satir; a++)
	   {
		   if (a == satir - 1)
		   {
			   for (int a = 0; a < sutun; a++)
			   {
				   cout << "*";
			   }
			   Sleep(100);
		   }
	   }
	   // iki bosluk birakilarak diger sekil yazilacaktir 
	   cout << endl;
	   cout << endl;
	   //ilk satiri sutun sayisi kadar yazacaktir
	   for (int a2 = 0; a2 < satir; a2++)
	   {
		   if (a2 == 0)
		   {
			   for (int a2 = 0; a2 < sutun; a2++)
			   {
				   cout << "*";
			   }
		   }
	   }
	   Sleep(100);
	   cout << endl;

	   int bosluk2 = 0;
	   //ilk ve son satiri aralarindaki 4 yildizi bolsuklar artarak yazacaktir
	   for (int a2 = 2; a2 < sutun / 2; a2++)
	   {
		   cout << "*" << setw(bosluk2+1) << "*" << setw(sutun-2*a2+1) << "*" << setw(bosluk2+1) << "*" << endl;
		   bosluk2++;
		   Sleep(100);
	   }
	   //Son satiri yazacaktir
	   for (int a2 = 0; a2 < satir; a2++)
	   {
		   if (a2 == satir - 1)
		   {
			   for (int a2 = 0; a2 < sutun; a2++)
			   {
				   cout << "*";
			   }
			   Sleep(100);
		   }
	   }
	   cout << endl;







	system("pause");
	return 0;
}
