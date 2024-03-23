class Solution {
public:
    
    int precedenceBracket(char c)
    {
        if(c == '(')
        {
            return 3;
        }
        else if(c == '{')
        {
            return 2;
        }
        else if (c =='[')
        {
            return 1;
        }
        else if (c ==')')
        {
            return 3;
        }
        else if(c == '}')
        {
            return 2;
        }
        else if (c ==']')
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    
    bool isValid(string str) {
        stack<char> s;
        for(int i = 0 ; i<str.length() ; i++)
    {
        if(str[i] == '[' || str[i] == '{' || str[i] == '(')
        {
            //if(s.empty() )
            //{
                s.push(str[i]);
            //}
            // else if(precedenceBracket(str[i]) < precedenceBracket(s.top()))
            // {
            //     //cout<<"Not correct order in opening"<<endl;
            //     return false;
            // }

        }

        else if(str[i] == ']' || str[i] == '}' || str[i] == ')')
        {
            if(s.empty())
            {
                //cout<<"Not opening present"<<endl;
                return false;
            }
            else if(precedenceBracket(str[i]) == precedenceBracket(s.top()))
            {
                s.pop();
            }
            
            else
            {
                //cout<<"Not correct order in closing"<<endl;
                return false;
            }
        }

        else
        {
            continue;
        }
    }
    if(s.empty())
    {
        cout<<"Correct expression"<<endl;
        return true;
    }
    else
    {
        cout<<"Not have complete closing "<<endl;
        return false;
    }
    }
};