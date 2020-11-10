#pragma once
#include <vector>
using namespace System;

namespace CppLayer {
	public ref class Class1
	{
		// TODO: Add your methods for this class here.
	public:
		array<String^>^ MakeValues()
		{
			//std::vector<int>& numbers = UnmanagedValues();
			std::vector<double> numbers;
			numbers.push_back(1);
			numbers.push_back(2);
			array<String^>^ testArray = gcnew array<String^>(2);
			
			int index = 0;
			std::vector<double>::const_iterator i;
			for (i = numbers.begin(); i != numbers.end(); ++i)
			{
				int num = *i;
				char ai = num + 48;
				String^ number = gcnew String("" + gcnew Char(ai));
				testArray[index++] = gcnew String("Value" + number);// +number);
			}
			return testArray;

			
		}

		std::vector<int>& UnmanagedValues()
		{
			std::vector<int> numbers(2);
			numbers.push_back(1);
			numbers.push_back(2);
			return numbers;
		}
	};
}
