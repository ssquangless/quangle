#include<iostream>
using namespace std;
class Person 
{
    protected:
        string name,gender,nationality;//ten,gioi tinh,quoc tich;
        int age;
    public:
       Person()
    {
       this-> name = "";
       this-> gender = "";
       this-> nationality = ""; 
       this-> age = 0;
    }
    Person(string name,string gender,int age,string nationality)
    {
       this-> name = name;
       this-> gender = gender;
       this-> nationality = nationality; 
       this-> age = age;
    }
    ~Person()
    {}
     void Input()
        {
            cout << "Name:";
            cin >> name;
            cout << "Gender:";
            cin >> gender;
            cout << "Age:";
            cin >> age;

        }
        void Output()
        {
            cout<< "Name:" << name << endl;
            cout<< "Gender:" << gender << endl;
            cout<< "Age:" << age << endl;

        }
};
class Investors : Person
{
    protected:
        string job;//nghe nghiep
        string investment_strategy;//Chien luoc dau tu.
        int money;//nguon von tinh theo usd
        
    public:
        Investors(): Person()
        {
            this->job = "";
            this->investment_strategy = "";
            this->money = 0;

        }
        Investors(string name,string gender ,int age,string nationality,string job,string investment_strategy,int money)
            : Person(name,gender,age,nationality)
        {
            this->job = job;
            this->investment_strategy = investment_strategy;
            this->money = money;

        }
       ~Investors()
       {

       }
        void Input()
        {
            Person :: Input();
            cout << "Nhap nghiep cua ban: ";
            cin >> this->job;
            cout<< "Nhap so von dau tư cua ban(USD):" ;
            cin >> money;
            cout << "Nhap chien luoc dau tu cua ban:" ;
            cin>> investment_strategy;

        }
        void Output()
        {   cout << "Thong tin nha dau tu:"<< endl;
            Person :: Output();
            cout << "Job: " << job <<endl;
            cout << "Money: " << money <<endl;
            cout << "chien luoc dau tu: " << investment_strategy << endl;
        }

};
class ConsumerMarket 
{
    protected:
        string name;//Tên của thị trường tiêu dùng.
        string location;//vi tri truong tieu dung
        int size;// kich thuoc cua truong tieu dung.
        double revenue;//doanh thu.
        double growth_rate;//toc do tang truong
        double market_share;// ty le thi phan cua truong tieu dung.
        string customer_demographics;// thong tin ve doi tuong khach hang
        string product_line;//cac san pham ban ra tren thi truong.
        string goal;//muc tieu
    public:
        ConsumerMarket()
        {
            this->name = "";
            this->location = "";
            this->size = 0;
            this->revenue = 0.0;
            this->growth_rate = 0.0;
            this->market_share = 0.0;
            this->customer_demographics;
            this->product_line = "" ;
            this->goal = "";
        }
        ConsumerMarket(string n, string l, int s, double r, double gr, double m, string cd, string pl, string g) {
            this-> name = n;
            this->location = l;
            this->size = s;
            this->revenue = r;
            this->growth_rate = gr;
            this->market_share = m;
            this->customer_demographics = cd;
            this->product_line = pl;
            this->goal = g;
            
        }
        void Input()
        {
            cout <<"nhap ten truong tieu dung: ";
            cin >> name;
            cout << "nhap vi tri truong tieu dung: ";
            cin >> location;
            cout << "nhap kich thuoc cua truong tieu dung: ";
            cin >> size;
            cout << "nhap toc do tang truong: " << endl;
            //....
            cout << "muc tieu" << endl;
            cin >> goal;
        }
        void Output()
        {
            cout << "Name: " << name << endl;
            cout << "Location: " << location << endl;
            cout << "Size: " << size << endl;
            cout << "Revenue: " << revenue << endl;
            cout << "Growth rate: " << growth_rate << endl;
            cout << "Market share: " << market_share << endl;
            cout << "Customer demographics: " << customer_demographics << endl;
            cout << "Product line: " << product_line << endl;
            cout << "Goal: " << goal << endl;
        }
};
class Project : ConsumerMarket
{
    protected:
        string project_name;
        float investment_capital;//von dau tu.
        float chi_phi;
        string rick;//rui ro
        string goal;//mục tieu
        float turnover;//doanh thu
        //danh sach doi thu,phan phoi tai nguyen,hop dong ,...v.v

    public:
        Project():ConsumerMarket()
        {
            this->project_name = "";
            this->investment_capital = 0.0;
            this->chi_phi = 0.0;
            this->rick = "";
            this->goal = "";
            this->turnover = 0.0;
        }
        ~Project()
        {}
        void Input()
        {
            cout << "Project name:";
            cin >> this->project_name;
            cout << "Investment capital:";
            cin >> this->investment_capital;
            cout << "Chi phi thi cong: ";
            cin >> this->chi_phi;
            ConsumerMarket::Input();
            cout << "Rui ro nha dau tu co the gap phai: ";
            cin >> this->rick;
            cout <<"muc tieu cua du an: ";
            cin >> this->goal;
            cout <<" Doanh thu :";
            cin >> this->turnover;
        }
        void Output()
        {   
            cout << "Project name:" << this->project_name << endl;
            cout << "Investment capital:" << this->investment_capital << endl;
            cout << "Chi phi thi cong: " << this->chi_phi << endl;
            ConsumerMarket::Output();
            cout << "Rui ro nha dau tu co the gap phai: " << this->rick << endl;
            cout <<"muc tieu cua du an: " << this->goal << endl;
            cout << "Doanh thu :" << this->turnover << endl; 
        }

};
/*class Founder : Person,Project
{
    protected:
        string company_name;//ten cong ty
        string field;//linh vuc
        float source_of_capital//nguon von kinh doanh
        vector<Person> p1;//danh sach thanh vien
        vector<project> p2;//danh sach du an
    public:
        Founder()
        {}
        ~Founder()
        {

        }
        void Input()
        {

        }
        voi Output()
        {

        }
        voi Profit()


};
class megreShort// sap xep du an theo so tien can dau tu,theo von dau tu cua project,theo doanh thu;theo von dau tu cua Founder,Investors

*/
int main()
{
    Project p;
    p.Input();
    p.Output();
    return 0;

}
