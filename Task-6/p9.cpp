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
        int countTemp = 0;
        for (auto itr : points)
        {
            cout << itr[0] << " " << itr[1] << endl;
            if ((itr.first[0] == point[0] || itr[0] == x) && (itr.first[1] == point[1] || itr.first[1] == y)){
                countTemp++;
            }
        }
        if (countTemp > 3)
            count *= 2 ^ (countTemp - 3);
        return count;
    }
};
/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares* obj = new DetectSquares();
 * obj->add(point);
 * int param_2 = obj->count(point);
 */