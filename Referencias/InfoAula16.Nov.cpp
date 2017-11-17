class No {
	public

	virtual void accept(Visitor *v) = 0;
};

class Visitor {
	public

	virtual void visit (ExpPLUSFactor * epf) = 0;
};



class PrintVisitor : public Visitor {
	public

	void visit (ExpPLUSFactor * epf){
		epf -> exf() -> accept(this);
		printf("+");
		epf -> factor() -> accept(this);
	}
};

class Exp : public No {	
};

class ExpPLUSFactor : public Exf {
	public

	void accept(Visitor *v){
	v -> visit(this);
	}
};
