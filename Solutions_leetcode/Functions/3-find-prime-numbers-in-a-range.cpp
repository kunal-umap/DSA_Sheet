
class Solution
{
public:
    vector<int> primeRange(int M, int N)
    {
        vector<int> ans;
        vector<bool> primes(N + 1, 1);

        primes[0] = primes[1] = 0;

        for (int i = 2; i * i <= N; i++)
        {
            for (int j = 2 * i; j <= N; j += i)
            {
                primes[j] = 0;
            }
        }

        for (int i = M; i <= N; i++)
        {
            if (primes[i] == 1)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};

// OR Best Case Solution

class Solution2
{
public:
    bool isPrime(int n)
    {
        if (n <= 1)
        {
            return false;
        }
        if (n <= 3)
        {
            return true;
        }
        if (n % 2 == 0 || n % 3 == 0)
        {
            return false;
        }
        for (int i = 5; i * i <= n; i += 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
            {
                return false;
            }
        }

        return true;
    }
    vector<int> primeRange(int M, int N)
    {
        vector<int> ans;

        for (int i = M; i <= N; i++)
        {
            if (isPrime(i))
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
