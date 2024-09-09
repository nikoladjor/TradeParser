//
// Created by nikola on 9/8/24.
//

#include "TradingParser.h"
#include <map>
#include <string>


TradingParser::TradingParser() {
    this->token_comment.insert({'a', "// Aggregate tradeId"});
    this->token_comment.insert({'p', "// Price"});
    this->token_comment.insert({ 'q', "// Quantity" });
    this->token_comment.insert({ 'f', "// First trade id" });
    this->token_comment.insert({ 'l', "// Last trade id" });
    this->token_comment.insert({ 'T', "// Timestamp" });
    this->token_comment.insert({ 'm', "// Was the buyer the maker?" });
}

TradingParser::~TradingParser() {

}

void TradingParser::getTradesStream(const char *symbol) {
    // Empty for now
    return;
}

void TradingParser::parseString(std::string &s) {
    std::string::iterator it;
    bool startField = false;
    std::string::iterator  startFieldId, endFieldId;
    bool endField = false;
    it = s.begin();
    while(it != s.end()) {

        if((*it) == '\{') {
            startField = true;
            startFieldId = it;
            std::cout << "[\n" << "  {" << std::endl;
            while (*(this->_find_next_token(it)) != '}') {

            }
//            this->_find_next_token(it);
        }


        if((*it) == '\}') {
            endField = true;
            endFieldId = it;

            std::cout << "\t}\n]" << std::endl;
        }
        it++;
    }
}

std::string::iterator TradingParser::_find_next_token(std::string::iterator &it) {
    std::string::iterator it_val_start, it_val_end;
    std::string val;
    while (*it !='\"') {
        // Keep going until you find ", which means that the next token appeared
        it++;
    }
    // Found the ", lets see the token;
    it++; // Now we should point to the token
    char token = *it;

    // Get the value
    while (*it != ':'){
        it++;
    }

    it_val_start = it;
    char tmp_char = *it;

    while ((tmp_char != ',') && (tmp_char != '}') ) {
        it++;
        tmp_char = *it;
    }
    val = std::string(it_val_start+1, it);
    if(token != 'M'){
        std::cout << "\t\t" << token << ":" << val << ", " << this->token_comment[token] <<  std::endl;
    }

    return it;
}
