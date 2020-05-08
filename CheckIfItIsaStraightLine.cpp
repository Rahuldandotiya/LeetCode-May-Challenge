class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=coordinates.size()-1;
        if(n==0) return 0;
        int x1=coordinates[0][0];
        int y1=coordinates[0][1];
        int x2=coordinates[n][0];
        int y2=coordinates[n][1];
        double m=(double)(y2-y1)/(double(x2-x1));
        for(int i=1;i<n;i++){
            int x=coordinates[i][0];
            int y=coordinates[i][1];
            double X=(double)(x-x1)*m;
            double Y=(double)(y-y1);
            if(X!=Y) return false;
        }
        return true;
    }
};
