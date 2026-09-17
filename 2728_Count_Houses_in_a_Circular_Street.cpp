/**
 * Definition for a street.
 * class Street {
 * public:
 *     Street(vector<int> doors);
 *     void openDoor();
 *     void closeDoor();
 *     bool isDoorOpen();
 *     void moveRight();
 *     void moveLeft();
 * };
 */
class Solution {
public:
    int houseCount(Street* street, int k) {
        for(size_t i = 0; i < k; i++)
        {
            street->closeDoor();
            street->moveRight();
        }
        int sum = 1;
        street->openDoor();
        street->moveRight();
        while(!street->isDoorOpen())
        {
            sum++;
            street->moveRight();
        }
        return sum;
    }
};
