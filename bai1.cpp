#include<iostream>
using namespace std;

class Time
{
    int gio, phut , giay;
    public:
        Time(int h = 0, int m = 0, int s = 0)
        {
            this->gio = h;
            this->phut = m;
            this->giay = s;
            this->ChuanHoa();
        }
        friend ostream &operator <<(ostream &os, Time a)
        {
            os<< a.gio << ":"<< a.phut<<":" << a.giay;
            return os;
        }
        friend istream &operator >> (istream &is , Time& a)
        {
            is >> a.gio >> a.phut >> a.giay;
            a.ChuanHoa();
            return is;
        }
        void ChuanHoa()
        {
            while (giay>= 60)
            {
                int a = giay/60;
                giay = giay%60;
                phut+= a;
            }
            while (phut>= 60)
            {
                int a = phut/60;
                phut = phut%60;
                gio+= a;
            }
            while (gio>= 24)
            {
                
                gio = gio%60;
            }
        }
        void operator ++()
        {
            giay += 1;
            this->ChuanHoa();
        }
        Time operator ++(int)
        {
            giay+= 1;
            this->ChuanHoa();
            Time a(gio,phut,giay);
            return a;
        }
};
int main()
{
    Time a(10,40,2) , b;
    cin >> b;
    cout << a<<endl;
    ++b;
    cout << b<<endl;
    cout << b++;
    return 0;
}