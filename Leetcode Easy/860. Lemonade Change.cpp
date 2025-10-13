//greedy problem
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        /*
        appraoch, tabulate the total types of bills used
        from each order, subtrac 5
            if remaidner greater than 0
                for loop through what we have
                while loop untill the total of custoemr is 0
                subtract the greatest bills we have, 
                subtract smallest bills
                return false if cant subtract with any 5 bills
        */
        
        //collects and stores customer bills
        vector<pair<int, int>> registere = {{5,0}, {10,0}, {20,0}};
        bool did_not_scam = true;

        for (int i = 0; i < bills.size(); i++) 
        {
            //below if statement takes in the bill to a cash register
            if (bills[i] == 20) registere[2].second++;
            else if (bills[i] == 10) registere[1].second++;
            else registere[0].second++;


            //amount of money we owe
            int change = bills[i] - 5;

            //from what we owe, serach through cash register
            //prioritze retiurnong the highest denomination to lowest
            //if not possible, then shoot
            while (change > 0)
            {
                //tries to give a 10 dollar bill as change
                if (registere[1].second > 0 && change - registere[1].first >= 0)
                {
                    change -= registere[1].first;
                    registere[1].second--;
                }
                //tries to give a 5 dollar bill as change
                else if (registere[0].second > 0 && change - registere[0].first >= 0)
                {
                    change -= registere[0].first;
                    registere[0].second--;
                }
                else
                {
                    did_not_scam = false;
                    break;
                }
            }
        }

        return did_not_scam;


    }
};