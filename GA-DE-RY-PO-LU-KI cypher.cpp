#include <string>

std::string encode (const std::string& str)
{
    std::string ans;
    for(unsigned int x=0;x<str.length();x++){
        switch(str[x]){
            case 'G':
                ans.push_back('A');
                break;
            case 'A':
                ans.push_back('G');
                break;
            case 'D':
                ans.push_back('E');
                break;
            case 'E':
                ans.push_back('D');
                break;
            case 'R':
                ans.push_back('Y');
                break;
            case 'Y':
                ans.push_back('R');
                break;
            case 'P':
                ans.push_back('O');
                break;
            case 'O':
                ans.push_back('P');
                break;
            case 'L':
                ans.push_back('U');
                break;
            case 'U':
                ans.push_back('L');
                break;
            case 'K':
                ans.push_back('I');
                break;
            case 'I':
                ans.push_back('K');
                break;
            case 'g':
                ans.push_back('a');
                break;
            case 'a':
                ans.push_back('g');
                break;
            case 'd':
                ans.push_back('e');
                break;
            case 'e':
                ans.push_back('d');
                break;
            case 'r':
                ans.push_back('y');
                break;
            case 'y':
                ans.push_back('r');
                break;
            case 'p':
                ans.push_back('o');
                break;
            case 'o':
                ans.push_back('p');
                break;
            case 'l':
                ans.push_back('u');
                break;
            case 'u':
                ans.push_back('l');
                break;
            case 'k':
                ans.push_back('i');
                break;
            case 'i':
                ans.push_back('k');
                break;
            default:
                ans.push_back(str[x]);
                break;
        }
    }
    return ans;
}

std::string decode (const std::string& str)
{
    std::string ans;
    for(unsigned int x=0;x<str.length();x++){
        switch(str[x]){
                        case 'G':
                ans.push_back('A');
                break;
            case 'A':
                ans.push_back('G');
                break;
            case 'D':
                ans.push_back('E');
                break;
            case 'E':
                ans.push_back('D');
                break;
            case 'R':
                ans.push_back('Y');
                break;
            case 'Y':
                ans.push_back('R');
                break;
            case 'P':
                ans.push_back('O');
                break;
            case 'O':
                ans.push_back('P');
                break;
            case 'L':
                ans.push_back('U');
                break;
            case 'U':
                ans.push_back('L');
                break;
            case 'K':
                ans.push_back('I');
                break;
            case 'I':
                ans.push_back('K');
                break;
            case 'g':
                ans.push_back('a');
                break;
            case 'a':
                ans.push_back('g');
                break;
            case 'd':
                ans.push_back('e');
                break;
            case 'e':
                ans.push_back('d');
                break;
            case 'r':
                ans.push_back('y');
                break;
            case 'y':
                ans.push_back('r');
                break;
            case 'p':
                ans.push_back('o');
                break;
            case 'o':
                ans.push_back('p');
                break;
            case 'l':
                ans.push_back('u');
                break;
            case 'u':
                ans.push_back('l');
                break;
            case 'k':
                ans.push_back('i');
                break;
            case 'i':
                ans.push_back('k');
                break;
            default:
                ans.push_back(str[x]);
                break;
        }
    }
    return ans;
}
