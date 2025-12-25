class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        /*
        once sort traverse through one time
        compare adjacent, seeing if overlap occurs
        if overlap occurs, remove the longest one, contineu one

        end point of previous greater than start ppint of currnet? if yes overlap occirs

        if no overlap, update the new end as teh current's endpoint
        */

        //below chunck of code sorts "intervals" in ascending order based on endpoints
        vector<vector<int>> duplicate;
        for (int i = 0; i < intervals.size(); i++) {
            duplicate.push_back({intervals[i][1], intervals[i][0]});
        }

        sort(duplicate.begin(), duplicate.end());
        intervals.clear();

        for (int i = 0; i < duplicate.size(); i++) {
            intervals.push_back({duplicate[i][1], duplicate[i][0]});
        }


        // below chunk of code counts # of overlaps and subsequnetly
        // min num of intervals needed to remove
        int removal_counter = 0, prev_end_point = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++)
        {
            if (prev_end_point > intervals[i][0])
            {
                removal_counter++;
            }
            else
            {
                prev_end_point = intervals[i][1];
            }
        }

        return removal_counter;
    }
};