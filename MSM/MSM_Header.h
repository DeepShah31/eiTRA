struct Medicine
{
    char medi_name[20];
    int medi_quantity;
    float medi_price;
    char supp_name[20];
    long int supp_cont;
    char id[3];
};


struct customer
{
    char name[30];
    long int contact_no;
    char medicine[10][10];
    int quantity[10];
    int medi_count;
    float total;
};

struct Bill
{
        int day;
        int month;
        int year;
        int hour;
        int minute;
        int second;
        struct customer cstmr;
        float sum;
};

void add_customer(struct customer);
int search_medicine(char medi_name[], FILE *fp);
int check_quantity(char medi_name[], int medi_quantity, FILE *fp);
void update_inc(char medi_name[], int medi_quantity, FILE *fp);
void update_dec(char medi_name[], int medi_quantity, FILE *fp);
void add_medicine();
void sell_medicine();
void buy_medicine(char medi_name[], int medi_quantity);
void delete_medicine();
void stock();
void report(char name[20], float total);
