#include <iostream>
#include "test.h"



using namespace std;

int main()
{

    //three car is way calculation
    int x;
    cout << "please input value is wal : ";
    cin >> x;

    double v1, v2, v3;
    cout << "This is go to car speed input value : " << endl;
    cin >> v1;
    cout << "This is go to car speed input value : " << endl;
    cin >> v2;
    cout << "This is go to car speed input value : " << endl;
    cin >> v3;
    

   

    cout << "Arrival time : " << carSpeeding(x, v1,v2,v3);

   
    // saqurate and sum calculation
        //int id,id1,id2;
        //cout << "sayi giriniz : ";
        //cin >> id;
        //cout << "sayi giriniz : ";
        //cin >> id1>>id2;

        //cout << "Toplamý: " << topla(id1, id2)<<endl;
        //cout << "Karesinin: " << kare_al(id);

      

        //int x;
        //double v1, v2, v3;
        //double t1, t2, t3;
        ////Not: h1, h2 hýzýnda giden araçlar ayný h3 ile ters yönde  gidiyor.
        //cout << "This is go to car way input value : " << endl;
        //cin >> x;
        //cout << "This is go to car speed input value : " << endl;
        //cin >> v1;
        //cout << "This is go to car speed input value : " << endl;
        //cin >> v2;
        //cout << "This is go to car speed input value : " << endl;
        //cin >> v3;

        //t1 = x / (v1 - v2);
        //t2 = x / (v1 + v2);
        //t3 = x / (v1 + v3);

  
        //double ekok;
        //for (int i = 1; i < t1 * t2 * t3; i++)
        //{

        //    if (int(t1) % i == 0 && int(t2) % i == 0 && int(t3) % i == 0)
        //        ekok = double(i);
        //}
        //
        //cout << "Ekok : " << ekok;
}
