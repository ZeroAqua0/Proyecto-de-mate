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