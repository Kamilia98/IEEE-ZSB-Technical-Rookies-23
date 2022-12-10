#include <bits/stdc++.h>
using namespace std;

class DetectSquares
{
    vector<vector<int>> points;

public:
    DetectSquares()
    {
        points.clear();
    }
    void add(vector<int> point)
    {
        points.push_back(point);
    }
    int count(vector<int> point)
    {
        int count = 0, x, y;
        for (auto itr : points)
        {
            if (itr[0] == point[0])
            {
                // two points with the same x FOUND
                y = itr[1]; // y=2
                for (auto itr2 : points)
                {
                    if (itr2[1] == point[1]) // x=3
                    {
                        x = itr2[0];
                        for (auto itr3 : points)
                        {
                            if (itr3[0] == x && itr3[1] == y)
                                count++;
                        }
                    }
                }
            }
        }
        return count;
    }
};
/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares* obj = new DetectSquares();
 * obj->add(point);
 * int param_2 = obj->count(point);
 */