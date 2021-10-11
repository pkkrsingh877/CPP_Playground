#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    //complete the function
    int temp = x;
    int remaindering;
    int constructReverse = 0;
    while (temp > 0)
    {
        remaindering = temp % 10;
        temp = temp / 10;
        constructReverse = remaindering + constructReverse * 10;
    }
    if (constructReverse == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    bool yesNo = isPalindrome(n);
    if (yesNo == true)
    {
        cout << n << " is a palindrome";
    }
    else
    {
        cout << n << " is NOT a palindrome";
    }
    return 0;
}