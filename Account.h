#pragma once

#include <string>

namespace account {
    class Account {
    private:
        static int id_number_global;
        int id_number;
        std::string name;
        float balance;
    public:
        Account();
        void setup();
        void display() const;
        void deposit(float);
        void withdraw(float);
        int get_id();
    };
}