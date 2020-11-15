
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
    Prob1 ( float error, float x1, float x2);
    float biseccion ();
    float MreglaFalsa ();
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
  public:
    Prob3 (float x1, float x2);
    float fun(float x);
    float area();
};