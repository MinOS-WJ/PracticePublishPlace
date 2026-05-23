#include "usr.h"

bool Student::operator<(const Student& other) const {
    return score < other.score;
}

istream& operator>>(istream& is, Student& s) {
    is >> s.id >> s.name >> s.score;
    return is;
}

ostream& operator<<(ostream& os, const Student& s) {
    os << s.id << " " << s.name << " " << s.score;
    return os;
}