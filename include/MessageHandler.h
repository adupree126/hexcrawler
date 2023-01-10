//
// Created by andy on 1/10/23.
//

#ifndef HEXCRAWLER_MESSAGEHANDLER_H
#define HEXCRAWLER_MESSAGEHANDLER_H

#include <fstream>

/**
 * A structure to handle logging of various types of message
 */
struct MessageHandler {
    std::ofstream file;
    bool verbose;

    MessageHandler(std::string log_path, bool verbose);


};
#endif //HEXCRAWLER_MESSAGEHANDLER_H
