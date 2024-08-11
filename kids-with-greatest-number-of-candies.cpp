#include<bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    vector<bool> arr(candies.size());
    int sum = 0;
    for (int i = 0; i < candies.size(); i++)
    {
        sum = extraCandies + candies[i];
        for (int j = 0; j < candies.size(); j++)
        {
            if (sum >= candies[j])
            {
                arr[i] = true;
            }
            else
            {
                arr[i] = false;
                break;
            }
        }
        sum = 0;
    }
    return arr;
}

int main(){
    

    return 0;
}