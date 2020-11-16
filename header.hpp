
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
    float aproximacionesEuler [];
    float aproximacionesRunge [];
  public:
    Prob4 ();
    float fun(float x);
    void euler();
    void runge();
    void print();
};