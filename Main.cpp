#include "Function.h"

template <class Item>
class Member
{
private:
	Item I;
public:
	Member(Item m)
	{
		I = m;
	}
	friend bool operator<(const Member& I1, const Member& I2)
	{
		return I1 < I2;
	}
	Member& operator=(const Member& t1)
	{
		I = t1.I;
		return *this;
	}
	friend std::ostream& operator<< (std::ostream& stream, const Member& m) 
	{
		stream << m;
		return stream;
	}
};




int main() {

	std::cout << "DOUBLE CHECKK" << std::endl;
	//check compare
	std::cout << "correct print is 1 -1 0" << std::endl;
	std::cout << compare<double>(1.0, 2.5) << std::endl;
	std::cout << compare<double>(4.5, 2.4) << std::endl;
	std::cout << compare<double>(4.4, 4.4) << std::endl;

	//check bubbleSort
	std::cout << "correct print is sorted array" << std::endl;

	const int arr_size = 5;
	double doubleArr[arr_size] = { 1000.0, 2.0, 3.4, 17.0, 50.0 };
	bubbleSort<double>(doubleArr,arr_size);
	for (int i = 0; i < arr_size; i++) {
		std::cout << doubleArr[i] << " ";
	}
	std::cout << std::endl;

	//check printArray
	std::cout << "correct print is sorted array" << std::endl;
	printArray<double>(doubleArr,arr_size);
	std::cout << std::endl;

	system("pause");




	std::cout << "CHAR CHECKK" << std::endl;
	//check compare
	std::cout << "correct print is 1 -1 0" << std::endl;
	std::cout << compare<char>('a', 'b') << std::endl;
	std::cout << compare<char>('d', 'c') << std::endl;
	std::cout << compare<char>('z', 'z') << std::endl;

	//check bubbleSort
	std::cout << "correct print is sorted array" << std::endl;

	char charArr[arr_size] = {'o' ,'z', 'c', 'f', 'u' };
	bubbleSort<char>(charArr, arr_size);
	for (int i = 0; i < arr_size; i++) {
		std::cout << charArr[i] << " ";
	}
	std::cout << std::endl;

	//check printArray
	std::cout << "correct print is sorted array" << std::endl;
	printArray<char>(charArr, arr_size);
	std::cout << std::endl;

	system("pause");




	std::cout << "CLASS CHECKK" << std::endl;
	//check compare
	Member<int> m1(1000);
	Member<int> m2(4);
	Member<int> m3(1);
	Member<int> m4(34);
	Member<int> m5(36);

	std::cout << "correct print is 1 -1 0" << std::endl;
	std::cout << compare<Member<int>>(m2, m1) << std::endl;
	std::cout << compare<Member<int>>(m2, m3) << std::endl;
	std::cout << compare<Member<int>>(m5, m5) << std::endl;

	//check bubbleSort
	std::cout << "correct print is sorted array" << std::endl;

	Member<int> memberArr[arr_size] = { m1 ,m2, m3, m4, m5 };
	bubbleSort<Member<int>>(memberArr, arr_size);
	for (int i = 0; i < arr_size; i++) {
		std::cout << memberArr[i] << " ";
	}
	std::cout << std::endl;

	//check printArray
	std::cout << "correct print is sorted array" << std::endl;
	printArray<Member<int>>(memberArr, arr_size);
	std::cout << std::endl;

	system("pause");
	return 1;
}