#include <iostream>

int main()

{
   

    int i = 42;
    const int ci = i;    // ok: i ထဲက တန်ဖိုးကို ci ထဲ ကူးယူ (copy) တာ
    int j = ci;          // ok: ci ထဲက တန်ဖိုးကို j ထဲ ကူးယူ (copy) တာ


    const int ci = 1024;
    const int &r1 = ci;   // ok: reference ရော underlying object ရောက const ဖြစ်နေလို့
    r1 = 42;              // error: r1 က reference to const ဖြစ်နေလို့ ပြောင်းလို့မရပါ
    int &r2 = ci;         // error: const object ကို non-const reference နဲ့ bind လို့မရပါ

    int i = 42;
    const int &r1 = i;      // const int& ကို သာမန် int object နဲ့ bind လို့ရတယ်
    const int &r2 = 42;     // ok: r2 က reference to const ဖြစ်လို့ literal နဲ့ bind လို့ရတယ်
    const int &r3 = r1 * 2; // ok: r3 က reference to const ဖြစ်တယ်
    int &r4 = r1 * 2;        // error: r4 က သာမန် non-const reference ဖြစ်နေလို့




    const double pi = 3.14;   // pi က const ဖြစ်တယ်၊ သူ့တန်ဖိုး ပြောင်းလို့မရဘူး
    double *ptr = &pi;        // error: ptr က သာမန် pointer ဖြစ်နေလို့
    const double *cptr = &pi; // ok: cptr က const ဖြစ်တဲ့ double ကို ညွှန်းနိုင်တယ်
    *cptr = 42;               // error: *cptr ကို တန်ဖိုး assign လုပ်လို့မရပါ



    int errNumb = 0;
    int *const curErr = &errNumb;  // curErr က errNumb ကို အမြဲတမ်း ညွှန်းနေလိမ့်မယ်
    const double pi = 3.14159;
    const double *const pip = &pi; // pip က const object ကို ညွှန်းတဲ့ const pointer ဖြစ်တယ်



    int i = 0;
    int *const p1 = &i;  // p1 ရဲ့တန်ဖိုးကို ပြောင်းလို့မရပါ၊ const က top-level ဖြစ်ပါတယ်
    const int ci = 42;   // ci ကို ပြောင်းလဲလို့မရပါ၊ const က top-level ဖြစ်ပါတယ်
    const int *p2 = &ci; // p2 ကို ပြောင်းလဲလို့ရပါတယ် (တခြား address ညွှန်းလို့ရတယ်)၊ const က low-level ဖြစ်ပါတယ်
    const int *const p3 = p2; // ညာဘက်အစွန်ဆုံး const က top-level ဖြစ်ပြီး၊ ဘယ်ဘက်က const ကတော့ low-level ဖြစ်ပါတယ်
    const int &r = ci;  // reference type တွေမှာရှိတဲ့ const က အမြဲတမ်း low-level ဖြစ်ပါတယ်
    }