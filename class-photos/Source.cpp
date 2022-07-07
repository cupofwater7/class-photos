#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool classPhotos(vector<int> redShirtHeights, vector<int> blueShirtHeights);

int main()
{
    vector<int> redShirtHeights = { 5, 8, 1, 3, 4 };
    vector<int> blueShirtHeights = { 6, 9, 2, 4, 5 };

    bool result =  classPhotos(redShirtHeights, blueShirtHeights);
    cout << boolalpha << result << endl;
    return 0;
}

bool classPhotos(vector<int> redShirtHeights, vector<int> blueShirtHeights) {
    // Write your code here.
    sort(redShirtHeights.begin(), redShirtHeights.end());
    sort(blueShirtHeights.begin(), blueShirtHeights.end());

    string shirtColorInFirstRow = redShirtHeights[0] < blueShirtHeights[0] ? "RED" : "BLUE";

    for (int idx = 0; idx < redShirtHeights.size(); idx++)
    {
        int redShirtHeight = redShirtHeights[idx];
        int blueShirtHeight = blueShirtHeights[idx];

        if (shirtColorInFirstRow == "RED")
        {
            if (redShirtHeight >= blueShirtHeight) return false;
        }
        else if (blueShirtHeight >= redShirtHeight) return false;
    }
    return true;
}