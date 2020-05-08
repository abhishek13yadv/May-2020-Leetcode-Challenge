Algorithm -

-> Use slope equation m = (y2 - y1)/(x2 - x1).
-> Calculate the slope for the first two points, check if the slope is equal for all other points.
-> If all the slopes are equal, then the points lie on a line, otherwise not.
-> We also need to handle the case when x2 - x1 turns out to be 0. If it is the case, assign INT_MIN value to a variable x. If the x2 - x1 values of all the points is equal to x, then the points lie on a line.



class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        bool flag = true;
        double x;
        if(coordinates[1][0] - coordinates[0][0] == 0)
            x = INT_MIN;
        else 
            x = coordinates[1][0] - coordinates[0][0];
        double m = (coordinates[1][1] - coordinates[0][1])/x;
        for(int i = 2; i < coordinates.size(); i++)
        {
            double x1 = coordinates[i][0] - coordinates[i - 1][0];
            if(x == 0)
                return x1 == 0;
            double slope = ((double)coordinates[i][1] - coordinates[i - 1][1])/x1;
            if(abs(slope - m) > 0.00000000001)
            {
                flag = false;
                break;
            }
        }
        return flag;
    }
};
