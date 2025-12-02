class Solution {
public:
    void rec(double num, long &fin, double &cur) {
        if (fin == 0) return;

        if (fin % 2 == 1) {
            cur *= num;
            fin -= 1;
        }
        else {
            rec(num * num, fin /= 2, cur);
            return;
        }

        rec(num, fin, cur);
    }

    double myPow(double x, int n) {
        if (x == 0) return 0;
        if (x == 1) return 1;

        double curr = 1;
        long pass = n;

        if (pass < 0) {
            pass = -pass;
            rec(1/x, pass, curr);
        } else {
            rec(x, pass, curr);
        }

        return curr;
    }
};
