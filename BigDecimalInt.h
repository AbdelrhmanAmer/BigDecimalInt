
using namespace std;
 
class BigDecimalInt{
    private:
        string num;
        char numSign = '+';
    public: 
        BigDecimalInt(string p_num) : num(p_num) {}
        string get_num();

        bool operator<(BigDecimalInt anotherDec);

        bool operator>(BigDecimalInt anotherDec);                   // f
        bool operator==(BigDecimalInt anotherDec);                  // g
        BigDecimalInt operator=(BigDecimalInt anotherDec);          // h
        int size();                                                 // i
        char sign();                                                // j
        friend ostream &operator<< (ostream &out, BigDecimalInt b); // k
};