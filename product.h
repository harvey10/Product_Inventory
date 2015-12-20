#ifndef "product_h"
#define "product_h"
  
  class Product {
  public:
    int getID();
    int getQuantity();
    double getPrice();
    string getName();
    void addQuantity(int);
    void removeQuantity(int);
    Product();
  private:
    int id;
    int quantity;
    double price;
    string name;
  };
  
#endif
