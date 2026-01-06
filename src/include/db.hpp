#pragma once
#include <pqxx/pqxx>

class Database {
public:
    Database();
    void add_student();
    void update_student(int id);
    void delete_student(int id);

private:
    pqxx::connection* conn;
};
