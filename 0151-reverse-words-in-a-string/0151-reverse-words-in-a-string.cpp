// class Solution {
// public:
//     string reverseWords(string s) {
//         vector<string>words;
//         string word="";
//         for(char ch : s)
//         {
//             if(ch !=' ')
//             {
//                 word+=ch;
//             }
//             else
//             {
//                 if(!word.empty())
//                 {
//                     words.push_back(word);
//                     word="";
//                 }
//             }
//         }

//         if(!word.empty())
//         {
//             words.push_back(word);
//         }

//         reverse(words.begin(),words.end());

//         string ans="";

//         for(int i=0;i<words.size();i++)
//         {
//             ans+=words[i];
//             if(i!=words.size()-1)
//             {
//                 ans+=" ";
//             }

//         }


//         return ans;
//     }
// };



class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string>words;
        while(ss>> word)
        {
            words.push_back(word);
        }

        reverse(words.begin(),words.end());

        string ans="";

        for(string st: words )
        {
            if(ans.empty())
            {
                ans+=st;
            }
            else
            {
                ans+=" ";
                ans+=st;
            }
        }
        return ans;
        
    }
};