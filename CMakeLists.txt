cmake_minimum_required(VERSION 3.29)
project(TradingParser)

set(CMAKE_CXX_STANDARD 17)

add_executable(TradingParser main.cpp
        TradingParser.cpp
        TradingParser.h
        SingleTrade.cpp
        SingleTrade.h)
