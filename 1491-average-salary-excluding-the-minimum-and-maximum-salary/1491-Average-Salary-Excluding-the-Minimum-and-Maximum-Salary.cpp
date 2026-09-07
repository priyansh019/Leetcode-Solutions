class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();

        int min = salary[0];
        int max = salary[0];

        // Find min and max
        for(int i = 0; i < n; i++) {
            if(salary[i] < min) {
                min = salary[i];
            }

            if(salary[i] > max) {
                max = salary[i];
            }
        }

        // Find sum excluding min and max
        int sum = 0;
        int count = 0;

        for(int i = 0; i < n; i++) {
            if(salary[i] != min && salary[i] != max) {
                sum += salary[i];
                count++;
            }
        }

        return (double)sum / count;
    }
};