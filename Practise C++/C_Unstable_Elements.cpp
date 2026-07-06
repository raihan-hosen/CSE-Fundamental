#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int len, target;
        cin >> len >> target;

        vector<int> nums(len);
        for (int i = 0; i < len; i++)
        {
            cin >> nums[i];
        }

        vector<int> blocks;
        for (int i = 0; i < len;)
        {
            int j = i;
            while (j < len && nums[j] == nums[i])
            {
                j++;
            }
            blocks.push_back(j - i);
            i = j;
        }

        int totalBlocks = blocks.size();
        int biggestBlock = *max_element(blocks.begin(), blocks.end());

        vector<int> howMany(biggestBlock + 1, 0);
        vector<int> addUp(biggestBlock + 1, 0);

        for (int b : blocks)
        {
            howMany[b]++;
            addUp[b] += b;
        }

        vector<int> diffSizes;
        for (int x = 1; x <= biggestBlock; x++)
        {
            if (howMany[x] > 0)
            {
                diffSizes.push_back(x);
            }
        }

        long long sumAll = len;
        int left = totalBlocks;
        int result = 0;

        for (int v : diffSizes)
        {
            if ((target - sumAll) % left == 0)
            {
                long long change = (target - sumAll) / left;
                if (change >= 1 - v)
                {
                    result++;
                }
            }
            sumAll -= addUp[v];
            left -= howMany[v];
        }

        cout << result << endl;
    }
    return 0;
}
