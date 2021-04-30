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
