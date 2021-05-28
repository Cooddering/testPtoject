#include <iostream> 
#include "test.h"

using namespace std;

//Three car is way calculation

double carSpeeding(double x, double v1, double v2, double v3) {

    double t1, t2, t3;
    
    t1 = x / (v1 - v2);
    t2 = x / (v1 + v2);
    t3 = x / (v1 + v3);

    int multipleBigValue , multipleSmollValue;
    double max;
    max = v1 * v2 * v3;
   for (int i = 1; i<v1 && i<v2 && i<v3; i++)
   {
       if (int(v1) % i == 0 && int(v2) % i == 0 && int(v3) % i == 0)
           multipleBigValue = double(i);
           
   }
   multipleSmollValue = max / multipleBigValue;
 return multipleSmollValue;
}


// Saquare and sum calculation
//int topla(int id1, int id2)
//{
//    return id1 + id2;
//    
//}
//
//int kare_al(int id)
//{
//    return id * id;
//}

