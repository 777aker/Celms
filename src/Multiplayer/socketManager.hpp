#pragma once

#include <string>
#include <vector>

class SocketManager
{
public:
    SocketManager();
    ~SocketManager();
    void startSocket();
    std::string getAddressPort();

private:
    std::vector<int> clients;
};

extern SocketManager *socketManager;