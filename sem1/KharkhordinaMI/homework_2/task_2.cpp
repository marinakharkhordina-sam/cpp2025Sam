#include <iostream>
using namespace std;

int main() 
{
    long long n;
    cout << "������� ����������� �����: ";
    cin >> n;

    if (n <= 0) 
    {
        cout << "�����������! ������� �� ����: " << endl;
        return 0;
    }

    cout << "������������������: " << n << " ";

    while (n != 1) 
    {
        if (n % 2 == 0) 
        {
            n = n / 2;
        }
        else 
        {
            n = (3 * n + 1) / 2;
        }
        cout << n << " ";
    }

    cout << endl << "�������� ������������ � ���������� 1." << endl;
    return 0;
}
