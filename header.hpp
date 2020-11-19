
class Prob1
{
  private:
    float error;
    float x1b;
    float x2b;
    float x1m;
    float x2m;
    int contadorb;
    int contadorm;
    float raizb;
    float raizm;
  public:
    Prob1();
    void biseccion ();
    void MreglaFalsa ();
    float fun(float x);
    bool comprobarRaiz(float x1, float x2);
    void print();
};

class Prob3
{
  private:
    float x1;
    float x2;
    float ancho;
    int repeticiones;
    float aproximaciones [];
  public:
    Prob3 ();
    float fun(float x);
    void area();
    void print();
};

class Prob4
{
  private:
    float x1;
    float y1;
    float ancho;
    int repeticiones;
    float aproximaciones [];
  public:
    Prob4 ();
    float fun(float x);
    void euler();
    void runge();
    void print();
    float k1(float x);
    float k2(float x, float h);
    float k3(float x, float h);
    float k4(float x, float h);
};