#include <iostream>
#include "TradingParser.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
//    std::string str = "{\"a\":123, \"b\":\"200.001\", \"L\":3}";
    std::string str = "{\"a\":3144215891,\"p\":\"55238.91000000\",\"q\":\"0.00034000\",\"f\":3801301286,\"l\":3801301286,\"T\":1725834370384,\"m\":false,\"M\":true},{\"a\":3144215892,\"p\":\"55238.91000000\",\"q\":\"0.00034000\",\"f\":3801301287,\"l\":3801301287,\"T\":1725834370384,\"m\":false,\"M\":true},{\"a\":3144215893,\"p\":\"55238.91000000\",\"q\":\"0.00034000\",\"f\":3801301288,\"l\":3801301288,\"T\":1725834370384,\"m\":false,\"M\":true},{\"a\":3144215894,\"p\":\"55238.91000000\",\"q\":\"0.00034000\",\"f\":3801301289,\"l\":3801301289,\"T\":1725834370384,\"m\":false,\"M\":true},{\"a\":3144215895,\"p\":\"55238.91000000\",\"q\":\"0.00034000\",\"f\":3801301290,\"l\":3801301290,\"T\":1725834370384,\"m\":false,\"M\":true},{\"a\":3144215896,\"p\":\"55238.91000000\",\"q\":\"0.00034000\",\"f\":3801301291,\"l\":3801301291,\"T\":1725834370384,\"m\":false,\"M\":true},{\"a\":3144215897,\"p\":\"55238.91000000\",\"q\":\"0.00034000\",\"f\":3801301292,\"l\":3801301292,\"T\":1725834370384,\"m\":false,\"M\":true}";
    TradingParser tp;
    tp.parseString(str);
}
