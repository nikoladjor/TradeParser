//
// Created by nikola on 9/8/24.
//

#ifndef TRADINGPARSER_TRADINGPARSER_H
#define TRADINGPARSER_TRADINGPARSER_H


#include <string>
#include <cstdio>
#include <iostream>
#include <map>
class TradingParser {
private:
    std::string _incoming_string;

    std::string::iterator _find_next_token(std::string::iterator &it);
    std::map<char, std::string> token_comment;


public:
    TradingParser();

    virtual ~TradingParser();

    void getTradesStream(const char* symbol);

    void parseString(std::string &s);


};


#endif //TRADINGPARSER_TRADINGPARSER_H
