class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        /*
        if size of stirng is 1 return false
        if 2 return consider edge cases later

        numbers before it are prepped for operatiomm
        when operation added, most recent two numbers are combined


        take in nubmers from string untill encounter an operation
        when operation encounterd last two numbers are added together to form sum
        
        after that any other operation is computed with last number plus operation with sum

        return sum at end

        switch around operation
        */
        /*
        if (tokens.size() == 1)
        {
            return stoi(tokens[0]);
        }
        */

        stack<int> stack;
        int temporary;
        for (int i = 0; i < tokens.size(); i++)
        {
            if (tokens[i] == "+")
            {
                temporary = stack.top();
                stack.pop();
                temporary = stack.top() + temporary;
                stack.pop();
                stack.push(temporary);
            }
            else if (tokens[i] == "-")
            {
                temporary = stack.top();
                stack.pop();
                temporary = stack.top() - temporary;
                stack.pop();
                stack.push(temporary);             
            }
            else if (tokens[i] == "*")
            {
                temporary = stack.top();
                stack.pop();
                temporary = stack.top() * temporary;
                stack.pop();
                stack.push(temporary);               
            }
            else if (tokens[i] == "/")
            {
                temporary = stack.top();
                stack.pop();
                temporary = stack.top() / temporary;
                stack.pop();
                stack.push(temporary);                
            }
            else
            {
                stack.push(stoi(tokens[i]));
            }
            
        }

        return stack.top();

    }
};