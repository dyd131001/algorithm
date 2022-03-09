#include <iostream>
#include <vector>

using namespace std;

vector<int> S;
int n, x;
int binsearch(int, int);  //재귀 이용
int binsearch2(int, int); //반복문 이용
int main(void)
{
    int index;
    cin >> n;
    S.assign(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> S[i];
    cin >> x;
    index = binsearch2(1, n);
    cout << index << endl;
}
int binsearch(int low, int high)
{
    int mid;

    if (low > high) // 종료 조건
        return 0;
    else
    {
        mid = (low + high) / 2;
        if (x == S[mid])
        {
            cout << mid << endl;
            return mid;
        }
        else if (x < S[mid])
            return binsearch(low, mid - 1);
        else
        { // if(x > s[mid])
            return binsearch(mid + 1, high);
        }
    }
}

int binsearch2(int low, int high)
{
    int mid;
    // 3
    while (low <= high)
    { // 종료 조건
        mid = (low + high) / 2;
        if (S[mid] == x)
        {
            return mid;
        }
        else if (S[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return 0;
}
