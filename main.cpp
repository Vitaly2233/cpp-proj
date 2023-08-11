#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  int numJewelsInStones(string jewels, string stones)
  {
    int count = 0;
    for (int i = 0; i < jewels.size(); i++)
    {
      for (int j = 0; j < stones.size(); j++)
      {
        if (jewels[i] == stones[j])
        {
          count++;
        }
      }
    }

    return count;
  }
};

int main()
{
  cout << "HELLOO. What?" << endl;


  Solution sol = Solution();


  bool result1 = sol.numJewelsInStones("aA", "aA");

  // cout << result1 << endl;
}