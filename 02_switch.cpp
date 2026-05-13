#include<iostream>
#include<string>
int main(){
    std::string input;
    int aCnt=0, eCnt=0, iCnt=0, oCnt=0, uCnt=0;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    for(char ch : input){
        switch(ch){
            case 'a':
            case 'A':
                ++aCnt;
                break;
            case 'e':
            case 'E':
                ++eCnt;
                break;
            case 'i':
            case 'I':
                ++iCnt;
                break;
            case 'o':
            case 'O':
                ++oCnt;
                break;
            case 'u':
            case 'U':
                ++uCnt;
                break;
        }
    }
    
    std::cout << "Number of a's: " << aCnt << std::endl;
    std::cout << "Number of e's: " << eCnt << std::endl;
    std::cout << "Number of i's: " << iCnt << std::endl;
    std::cout << "Number of o's: " << oCnt << std::endl;
    std::cout << "Number of u's: " << uCnt << std::endl;
    return 0;
}