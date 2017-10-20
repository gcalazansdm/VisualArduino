#ifndef TESTE_H
#define TESTE_H
//tudo no .h é inline;
//delete[] quando o new é dado para um array ex new int[]; ver abaixo
//delete apenas para new quando malloc é free;
class teste{
    private:
        int a_;
        float b_;
        double* c_;
    public:
        teste():
            a_(0),b_(0.0f){}
        teste(int a,float b):
            a_(a),b_(b),c(new double[8]){}
        virtual ~teste(){
               delete[] c;
        }
        teste(const TESTE& t): a_(t.a_), b_(t.b_),c_(t.c_){}
        void set_a(int a){
            a_ = a;
        int a() const /*não modifica a instancia da classe*/ {
            return a_;
        }
}
#endif