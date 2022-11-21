struct Rational
{
    Rational(int, int);

    void add(Rational);
    void sub(Rational);
    void mul(Rational);
    void div(Rational);

    void neg();
    void inv();
    double to_double() const;

    Rational& operator+=(Rational const&);
    Rational& operator-=(Rational const&);
    Rational& operator*=(Rational const&);
    Rational& operator/=(Rational const&);

    Rational operator-() const;
    Rational operator+() const;

    double convert(Rational const&) const;
    operator double() const;

private:
    int numerator_;
    int denominator_;
};

Rational operator+(Rational, Rational);
Rational operator-(Rational, Rational);
Rational operator*(Rational, Rational);
Rational operator/(Rational, Rational);

bool operator>(Rational const&, Rational const&);
bool operator<(Rational const&, Rational const&);
bool operator==(Rational const&, Rational const&);
bool operator!=(Rational const&, Rational const&);
bool operator>=(Rational const&, Rational const&);
bool operator<=(Rational const&, Rational const&);