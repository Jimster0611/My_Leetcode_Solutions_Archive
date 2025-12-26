class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        /*
        sort events based on start time
        sort events based on end time

        traverse through the start times,
            check which end points are less
            use that to update current max
        */
        vector<vector<int>> end_times;
        for (int i = 0; i < events.size(); i++) {
            end_times.push_back({events[i][1], events[i][0],events[i][2]});
        }
        sort(end_times.begin(), end_times.end());
        sort(events.begin(), events.end());

        int greatest_value = 0, greatest_end = 0;

        int i = 0, j = 0;
        while (i < events.size())
        {
            int start = events[i][0];
            while (j < end_times.size())
            {
                if (end_times[j][0] < start)
                    greatest_end = max(greatest_end, end_times[j][2]);
                else
                    break;
                j++;
            }
            greatest_value = max(greatest_end + events[i][2], greatest_value);
            i++;
        }


        return greatest_value;
    }
};