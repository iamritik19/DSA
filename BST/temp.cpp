#include<iostream>
#include<string>
class customers{
    std::string name;
    long long int accountNumber;
    double accountBalance;
    bool isActive;
    public:
    customers(std::string name,long long accountNumber,double accountBalance,bool isActive){
        this->name=name;
        this->accountNumber=accountNumber;
        this->accountBalance=accountBalance;
        this->isActive=isActive;
    }
    void deposit(double amount){
       accountBalance+=amount;
    }
    void withdraw(double amount){
        accountBalance-=amount;
    }
    void transfer(double amount,long long  targetAccount){
       accountBalance-=amount;
    }
    void printDetails(){
        std::cout<<name<<std::endl;
        std::cout<<accountNumber<<std::endl;
        std::cout<<accountBalance<<std::endl;
    }
};
int main(){
customers c1("ritik",123456789,34567.76,true);
c1.deposit(32.24);
c1.withdraw(600);
c1.printDetails();
return 0;
}