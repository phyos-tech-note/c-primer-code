#include <iostream>

int main()
{

    int i = 1024, i2 = 2048; 
    int &r = i, r2 = i2;      // သတိထားပါ! r က reference ဖြစ်ပြီး r2 က int ရိုးရိုးပါ
    int &r3 = i, &r4 = i2;    // r3 ရော r4 ရော နှစ်ခုလုံး reference ဖြစ်သွားပါပြီ

    int ival = 1024;
    std::cout << ival <<std::endl ;
    int &refVal = ival;
    refVal = 2;
    int ii = refVal;

    std::cout << ival <<std::endl 
             << refVal << std::endl 
             << ii << std::endl;

             return 0;

}