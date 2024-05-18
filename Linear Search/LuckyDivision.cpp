/*Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him find out if the given number n is almost lucky.

Input
The single line contains an integer n (1 ≤ n ≤ 1000) — the number that needs to be checked.

Output
In the only line print "YES" (without the quotes), if number n is almost lucky. Otherwise, print "NO" (without the quotes).

Examples
Inputcopy	Outputcopy
47
YES
Inputcopy	Outputcopy
16
YES
Inputcopy	Outputcopy
78
NO
Note
Note that all lucky numbers are almost lucky as any number is evenly divisible by itself.

In the first sample 47 is a lucky number. In the second sample 16 is divisible by 4.*/

#include <bits/stdc++.h>
using namespace std;

bool isLucky(int number) {
    while (number > 0) {
        int digit = number % 10;
        if (digit != 4 && digit != 7)
            return false;
        number /= 10;
    }
    return true;
}

string isAlmostLucky(int n) {
    for (int i = 1; i <= n; i++) {
        if (isLucky(i) && n % i == 0)
            return "YES";
    }
    return "NO";
}

int main() {
    int n; cin >> n;
    cout << isAlmostLucky(n) << endl;
    return 0;
}