#include<bits/stdc++.h>
using namespace std;

int convertToDecimal(string binaryInput)
{
    vector<int> a, b;
    int n = binaryInput.size();
    int d = 0;
    for (int i = n - 1; i >= 0; i--)
    {

        a.push_back(int(binaryInput[i])-48);
        b.push_back(pow(2, d));
        d++;
    }
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0) b[i] = 0;
        s+=b[i];
    }
    return s;
}
string convertToBinary(int numBer)
{
    string s = "";
    while (numBer > 0)
    {
        s = to_string(numBer % 2) + s;
        numBer /= 2;
    }
    return s;
}

int main ()
{
    int numBer;
    string binaryInput;
    cin >> numBer;
    cin >> binaryInput;
    cout << convertToBinary(numBer) << " " << convertToDecimal(binaryInput);
    return 0;

}
