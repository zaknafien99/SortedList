#include "pch.h"

using namespace System;
using namespace System::Collections::Generic;

int main(array<System::String ^> ^args)
{
    SortedList<String^, int>^ sl = gcnew SortedList<String^, int>();

    sl->Add("Dilbert", 1044);
    sl->Add("Wally", 2213);
    sl->Add("Ted", 1110);
    sl->Add("Alice", 3375);

    for each (KeyValuePair < String^, int> kp in sl)
    Console::WriteLine("Key = {0}, value={1}", kp.Key, kp.Value);


    return 0;
}
