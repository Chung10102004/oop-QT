#include<iostream>
#include<vector>
using namespace std;

class Nguoi
{
    string HoTen, NamSinh, CMND, diachithuongtru;
    public:
        Nguoi(string ht ="", string ns="", string cm="", string dc="")
        {
            HoTen = ht;
            NamSinh = ns;
            CMND = cm;
            diachithuongtru = dc;
        }
        friend ostream &operator << (ostream &os , Nguoi a)
        {
            os << "Ho va Ten: "<< a.HoTen;
            os << "Nam sinh: " << a.NamSinh;
            os << "CMND: "<< a.CMND;
            os << "Dia Chi: "<< a.diachithuongtru;
        }
        friend istream &operator >> (istream &is, Nguoi& a)
        {
            cout << "Nhap ho ten: ";
            cin.ignore();
            getline(cin, a.HoTen);
            cout<< "Nhap nam sinh: ";
            cin >> a.NamSinh ;
            cout << "Nhap CMND: ";
            cin >> a.CMND;
            cout<< "Nhap dia chi thuong tru: ";
            getline(cin,a.diachithuongtru);
        }
};
class date
{
    int ngay,thang,nam;
    public:
        date(int n = 0 , int t = 0, int m = 0)
        {
            ngay = n;
            thang = t;
            nam = m;
        }
        void Nhap()
        {
            cin >> ngay;
            cin >> thang;
            cin >> nam;
        }
};
class Nha{
    protected:
        string DiaChi;
        int tienthue;
        date ngaythue;
        vector<Nguoi> nguoithue;
        int loai;
    public:
        Nha()
        {}
        virtual void tinhchiphi() = 0;
        
        

};

