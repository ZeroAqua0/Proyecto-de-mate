
class Prob1
{
  private:
    float error;
    float x1;
    float x2;
    int contadorb;
    int contadorm;
    float raizb;
    float raizm;
  public:
    Prob1();
    void biseccion ();
    void MreglaFalsa ();
    float fun(float x);
    bool comprobarRaiz();
    void print();
};

class Prob3
{
  private:
    float x1;
    float x2;
    float ancho;
    int contador; 
    int i;
    int n;
    float am;
    float at;
    float aproximaciones [n];
  public:
    Prob3 ();
    float fun(float x);
    float area();
};