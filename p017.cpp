#include <bits/stdc++.h>
using namespace std;

// one two three four five six seven eight nine
// 3 3 5 4 4 3 5 5 4  = 36
// ten eleven twelve thirteen fourteen fifteen sixteen seventeen eighteen nineteen
// 3 6 6 8 8 7 7 9 8 8 = 70
// twenty thirty forty fifty sixty seventy eighty ninety
// 6 6 5 5 5 7 6 6 = 46

string ones[10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string ttens[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string tens[10] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
string hundred = "hundred";
string thousand = "thousand";

string itow(int n)
{
    string ret;
    if (n == 1000)
        return ones[1] + thousand;
    if (n / 100)
        ret += ones[n / 100] + hundred;
    if (n / 100 && n % 100)
        ret += "and";
    if ((n % 100) / 10 >= 2)
    {
        ret += tens[(n % 100) / 10];
        ret += ones[n % 10];
    }
    else if ((n % 100) / 10 == 1)
        ret += ttens[n % 10];
    else
        ret += ones[n % 10];
    return ret;
}

int main()
{
    int sum = 0;
    cout << itow(161) << endl;
    for (int i = 1; i <= 1000; i++)
        sum += itow(i).size();
    cout << sum << endl;

    int total = 0;
    total += 36*9+70+460;
    total *= 10; // 1~99
    total += 3*99*9; // and
    total += 7*900; // hundred
    total += 36 * 100; // front number of hundred
    total += 3 + 8; // one thousand
    cout << total;
}
