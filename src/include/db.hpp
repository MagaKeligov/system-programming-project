#pragma once
#include <pqxx/pqxx>

class Database {
public:
    Database();
    void add_student();
private:
    pqxx::connection* conn;
};
