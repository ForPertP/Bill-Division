#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'bonAppetit' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY bill
 *  2. INTEGER k
 *  3. INTEGER b
 */

void bonAppetit(vector<int> bill, int k, int b)
{
    int sum = 0;
    for (size_t i = 0; i < bill.size(); ++i)
    {
        if (i != k)
        {
            sum += bill[i];
        }
    }
    
    sum = sum / 2;
    if (sum < b)
    {
        std::cout << b - sum;
    }
    else
    {
        std::cout << "Bon Appetit";
    }
}
