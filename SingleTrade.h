//
// Created by nikola on 9/8/24.
//

#ifndef TRADINGPARSER_SINGLETRADE_H
#define TRADINGPARSER_SINGLETRADE_H

#include <string>
#include <cstdint>

class SingleTrade {
private:
public:
    SingleTrade();

    virtual ~SingleTrade();
    void parseFromString(std::string incoming_string);
    void print();

    // Fields
    int a;
    std::string p;
    std::string q;
    int f;
    int l;
    uint32_t T;
    bool m;
};


#endif //TRADINGPARSER_SINGLETRADE_H
