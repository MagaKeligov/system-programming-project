#include "db.hpp"

int main() {
    Database db;
    db.add_student();
    db.update_student(1);
    db.delete_student(1);

    return 0;
}
