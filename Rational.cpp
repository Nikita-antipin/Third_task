#include "Rational.h"


Rational::Rational(int numerator = 0, int denominator = 1) : numerator_(numerator), denominator_(denominator) {};

void Rational::add(Rational rational) {
    numerator_ = numerator_ * rational.denominator_ + rational.numerator_ * denominator_;
    denominator_ *= rational.denominator_;
}
void Rational::sub(Rational rational) {
    numerator_ = numerator_ * rational.denominator_ - rational.numerator_ * denominator_;
    denominator_ *= rational.denominator_;
}

void Rational::mul(Rational rational) {
    numerator_ *= rational.numerator_;
    denominator_ *= rational.denominator_;
}

void Rational::div(Rational rational) {
    numerator_ *= rational.denominator_;
    denominator_ *= rational.numerator_;
}

void Rational::neg() {
    numerator_ = -numerator_;
}

void inv() {}

Rational& Rational::operator+=(Rational const& r) {
        this->add(r);
        return *this;
    }
Rational& Rational::operator-=(Rational const& r) {
        this->sub(r);
        return *this;
    }
Rational& Rational::operator*=(Rational const& r) {
        this->mul(r);
        return *this;
    }
Rational& Rational::operator/=(Rational const& r) {
        this->div(r);
        return *this;
    }
    Rational Rational::operator -() const {
        Rational b = *this;
        b.neg();
        return b;
    }
    Rational Rational::operator +() const {
        return *this;
    }

double Rational::to_double() const {
    return numerator_ / (double)denominator_;
}


double Rational::convert(Rational const& r) const {
    return (r.denominator_ * numerator_ <= r.numerator_ * denominator_);
}

Rational::operator double() const { return to_double(); }

Rational operator+(Rational rational1, Rational rational2) {
    return(rational1 += rational2);
}

Rational operator-(Rational rational1, Rational rational2) {
    return(rational1 -= rational2);
}

Rational operator*(Rational rational1, Rational rational2) {
    return(rational1 *= rational2);
}

Rational operator/(Rational rational1, Rational rational2) {
    return(rational1 /= rational2);
}

bool operator>(Rational const& a, Rational const& b) {
    if (a.convert(b))
        return 0;
    else return 1;
}
bool operator<(Rational const& a, Rational const& b) {
    if (b.convert(a))
        return 0;
    else return 1;
}
bool operator==(Rational const& a, Rational const& b) {
    if (!(a > b) && !(b > a))
        return 1;
    else return 0;
}
bool operator!=(Rational const& a, Rational const& b) {
    if (!(a == b))
        return 1;
    else return 0;
}
bool operator>=(Rational const& a, Rational const& b) {
    if ((a > b) || (a == b)) return 1;
    else return 0;
}
bool operator<=(Rational const& a, Rational const& b) {
    if ((a < b) || (a == b)) return 1;
    else return 0;
}




