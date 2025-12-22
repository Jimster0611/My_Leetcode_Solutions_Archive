class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        /*
        return total area coverd by 2 rectangles given it's coordinates

        find area of one, find area of 2
        find area overlappong and ubstract?
        */
        int area_first_rect = abs(ax1-ax2) * abs(ay1-ay2);
        int area_second_rect = abs(bx1-bx2) * abs(by1-by2);

        //to be modified in a bit
        int overlapx = max(0, min(ax2, bx2) - max(ax1, bx1));
        int overlapy = max(0, min(ay2, by2) - max(ay1, by1));

        int area_overlapping = overlapx * overlapy;




        return area_first_rect + area_second_rect - area_overlapping;
    }
};