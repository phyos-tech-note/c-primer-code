#include <iostream>

int reused = 42;  // Global scope က reused

int main() {
    int unique = 0; 
    // (1) Global reused ကို သုံးမယ် - prints 42
    std::cout << reused << " " << unique << std::endl;

    int reused = 0; // Local scope မှာ နာမည်တူ reused တစ်ခု ထပ်ဆောက်လိုက်ပြီ
    
    // (2) Local reused က global ကို ဖုံးသွားပြီ (Hiding) - prints 0
    std::cout << reused << " " << unique << std::endl;

    // (3) Global reused ကိုပဲ ပြန်သုံးချင်ရင် '::' သုံးရမယ် - prints 42
    std::cout << ::reused << " " << unique << std::endl;

    return 0;
}