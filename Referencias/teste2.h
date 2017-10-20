#ifndef TESTE2_H
#define TESTE2_H
/*Herança public tudo que é publico mantem publico*/
/*Herança private os atributos que a classe pai possui se tornam privados*/
/*Herança protected os atributos que a classe pai possui se tornam protected*/ 
class Teste2 :/*o equvalente a extends em Java*/ public /* Virtual, para evitar o D.D.D.*/ Teste/*, Teste3,Teste4*/{
	private:
		Teste *c_;
	public:
		Teste2(int a,int b, Teste* c):
			Teste(a,b), c_(c){}
		virtual /*não reptresenta abstarct*/ void Teste() = 0/*determina abstrato por apontar para nulo*/; 
		virtual ~Teste2()
		{
			delete c_;
		}
		Teste2(const Teste& t):
			Teste(t.a_,t.b_), t3(t2.c_){}
		Teste* c_()
		{
			return t3_;
		}
		const Teste* c_() const
		{
			return t3_;
		}
}



#endif