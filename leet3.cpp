#include <iostream>
#include <vector>
using namespace std;
bool solve(vector<string> &v1, vector<string> &v2)
{
  vector<char> ch1;
  vector<char> ch2;
  for (int i = 0; i < v1.size(); i++)
  {
    for (int j = 0; j < v1[i].size(); j++)
    {
      ch1.push_back(v1[i][j]);
    }
  }
  for (int i = 0; i < v2.size(); i++)
  {
    for (int j = 0; j < v2[i].size(); j++)
    {
      ch2.push_back(v2[i][j]);
    }
  }
if(ch1.size()!=ch2.size())return false;
  for (int i = 0, j = 0; i < ch1.size(), j < ch2.size(); i++, j++)
  {
    if (ch1[i] != ch2[j])
    {
      return false;
    }
  }
  return true;
}
int main()
{
  int n;
  cin >> n;
  vector<string> v1(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v1[i];
  }
  vector<string> v2(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v2[i];
  }
  cout << solve(v1, v2);
  return 0;
}
