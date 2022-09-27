#include <iostream>
using namespace std;

template <typename T>
void clear_arr(T arr[], const int length, int key) {
	for (int i = 0; i < length; i++) {
			if (arr[i] == key)
			arr[i] = 0;
	}
}

template <typename T>
void show_arr(T arr[], const int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
	
}

int index_sum(int arr1[], int arr2[], int index, const int length1, const int length2) {
	if (index < length1 && index < length2 && index>=0)
		return arr1[index] + arr2[index];
	else
		cout << "ERROR\n";
		return 0;
}

template <typename T>
T mean_arr(T arr[], const int length) {
	cout << "[";
	for (int i = 0; i < length; i++) {
		cout << arr[i] << ", ";
	}
	cout << "\b\b]\n";

	T max = arr[0];
	for (int i = 0; i < length; i++) {
		if (max < arr[i])
			max = arr[i];
	}

	T min = arr[0];
	for (int i = 0; i < length; i++) {
		if (min > arr[i])
			min = arr[i];
	}

	return (max + min) / 2;
}

void prime_range(int num1, int num2) {
	for (int i = num1; i <= num2; i++) {
		int counter = 1;
		for (int j = 1; j <= i / 2; j++)
			if (i % j == 0)
				counter++;
		if (counter == 2)
			cout << i << ", ";
	}
	cout << "\b\b.\n";
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m, A, B;

	cout << "������ 1. ��������� ��������� ��������.\n";
	const int size = 10;
	int arr[]={ 1,23,11,3,-8,23,56,7,1,1 };
	cout << "�������� ������:\n";
		std::cout << '[';
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
	cout << "������� �������� ��������:\n";
	cin >> n;
	clear_arr(arr, size, n);
	cout << "������, � ������� �������� ��������, ������ ��������� ��������:\n";
	show_arr(arr, size);
	cout << "\n";

	cout << "������ 2. ����� ��������� 2� �������� ��� ��������� ��������.\n";
	const int size1 = 5;
	int arr1[] = { 2,3,5,4,7 };
	cout << "������ ������:\n";
	std::cout << '[';
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ", ";
	std::cout << "\b\b]\n";
	
	const int size2 = 6;
	int arr2[] = { 1,8,6,2,10,18 };
	cout << "������ ������:\n";
	std::cout << '[';
	for (int i = 0; i < size2; i++)
		std::cout << arr2[i] << ", ";
	std::cout << "\b\b]\n";
	cout << "������� �����-������:\n";
	cin >> m;
	cout << index_sum(arr1, arr2, m, size1, size2) << "\n\n";
	

	cout << "������ 3. ������� �������������� ������������� � ������������ ��������� �������.\n";
	cout << "�������� ������:\n";
	const int size3 = 10;
	double arr3[size3]{ -12,3,-9,-13,6,86,52,8,7,1 };
	cout << "������� �������������� ������������� � ������������ ��������� ������� = " << mean_arr(arr3, size3) << "\n\n";
	
	cout << "������ 4. ����� ������� �����, ���������� � ��������.\n";
	cout << "������� ������ ���������:\n";
	cin >> A;
	cout << "������� ����� ���������:\n";
	cin >> B;
	cout << "������� ����� � ��������� ���� ���������:\n";
	prime_range(A, B);

	return 0;
}