class Solution {
public:
    bool isSameAfterReversals(int num) {
        int original = num;
        int rev1=0;
        while (num != 0) {
            int digit1 = num % 10;
            rev1 = rev1 * 10 + digit1;
            num /= 10;
        }
        int rev2=0;
        while (rev1 != 0) {
            int digit2 = rev1 % 10;
            rev2 = rev2 * 10 + digit2;
            rev1 /= 10;
        }
        if (rev2 == original) return true;
        else return false;
    }
};