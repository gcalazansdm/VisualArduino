#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H

#include <IOstream>

class PrintVisitor : public Visitor 
{
	public:
		virtual void visit(VariablesTypesRule6* e)
		{
			cout << "Boolean";
		}
		virtual void visit(VariablesTypesRule5* e)
		{
			cout << "string";
		}
		virtual void visit(VariablesTypesRule4* e)
		{
			cout << "char";
		}
		virtual void visit(VariablesTypesRule3* e)
		{
			cout << "Float";
		}
		virtual void visit(VariablesTypesRule2* e)
		{
			cout << "int";
		}
		virtual void visit(VariablesTypesRule1* e)
		{
			cout << "Double";
		}
		virtual void visit(VarRule2* e)
		{
			e -> variablestypes() -> accept(this);
			cout << "L_ID";
			cout << "=";
			e -> operation() -> accept(this);
		}
		virtual void visit(VarRule1* e)
		{
			e -> variablestypes() -> accept(this);
			cout << "L_ID";
		}
		virtual void visit(ValuesRule7* e)
		{
			cout << "L_ID";
		}
		virtual void visit(ValuesRule6* e)
		{
			cout << "L_BOOL";
		}
		virtual void visit(ValuesRule5* e)
		{
			cout << "L_STRING";
		}
		virtual void visit(ValuesRule4* e)
		{
			cout << "L_CHAR";
		}
		virtual void visit(ValuesRule3* e)
		{
			cout << "L_DOUBLE";
		}
		virtual void visit(ValuesRule2* e)
		{
			cout << "L_FLOAT";
		}
		virtual void visit(ValuesRule1* e)
		{
			cout << "L_INT";
		}
		virtual void visit(ElemRule4* e)
		{
			e -> values() -> accept(this);
		}
		virtual void visit(ElemRule3* e)
		{
			cout << "(";
			e -> eq() -> accept(this);
			cout << ")";
		}
		virtual void visit(ElemRule2* e)
		{
			cout << "-";
			e -> elem() -> accept(this);
		}
		virtual void visit(ElemRule1* e)
		{
			cout << "+";
			e -> elem() -> accept(this);
		}
		virtual void visit(FactorRule3* e)
		{
			e -> elem() -> accept(this);
		}
		virtual void visit(FactorRule2* e)
		{
			e -> factor() -> accept(this);
			cout << "*";
			e -> elem() -> accept(this);
		}
		virtual void visit(FactorRule1* e)
		{
			e -> factor() -> accept(this);
			cout << "/";
			e -> elem() -> accept(this);
		}
		virtual void visit(EqRule3* e)
		{
			e -> factor() -> accept(this);
		}
		virtual void visit(EqRule2* e)
		{
			e -> eq() -> accept(this);
			cout << "-";
			e -> factor() -> accept(this);
		}
		virtual void visit(EqRule1* e)
		{
			e -> eq() -> accept(this);
			cout << "+";
			e -> factor() -> accept(this);
		}
		virtual void visit(UnitaryLogicalOperator* e)
		{
			cout << "nao";
		}
		virtual void visit(BinaryLogicalOperatorRule2* e)
		{
			cout << "ou";
		}
		virtual void visit(BinaryLogicalOperatorRule1* e)
		{
			cout << "e";
		}
		virtual void visit(LogicOPRule4* e)
		{
			cout << "(";
			e -> logicop() -> accept(this);
			cout << ")";
		}
		virtual void visit(LogicOPRule3* e)
		{
			cout << "L_BOOL";
		}
		virtual void visit(LogicOPRule2* e)
		{
			e -> unitarylogicaloperator() -> accept(this);
			e -> logicop() -> accept(this);
		}
		virtual void visit(LogicOPRule1* e)
		{
			e -> logicop() -> accept(this);
			e -> binarylogicaloperator() -> accept(this);
			e -> logicop() -> accept(this);
		}
		virtual void visit(BinaryCompOperatorRule4* e)
		{
			cout << "<=";
		}
		virtual void visit(BinaryCompOperatorRule3* e)
		{
			cout << ">=";
		}
		virtual void visit(BinaryCompOperatorRule2* e)
		{
			cout << "<";
		}
		virtual void visit(BinaryCompOperatorRule1* e)
		{
			cout << ">";
		}
		virtual void visit(LogicCompRule2* e)
		{
			cout << "(";
			e -> logiccomp() -> accept(this);
			cout << ")";
		}
		virtual void visit(LogicCompRule1* e)
		{
			e -> eq() -> accept(this);
			e -> binarycompoperator() -> accept(this);
			e -> eq() -> accept(this);
		}
		virtual void visit(UnitaryOperatorsRule2* e)
		{
			e -> values() -> accept(this);
			cout << "--";
		}
		virtual void visit(UnitaryOperatorsRule1* e)
		{
			e -> values() -> accept(this);
			cout << "++";
		}
		virtual void visit(OperationRule3* e)
		{
			e -> unitaryoperators() -> accept(this);
		}
		virtual void visit(OperationRule2* e)
		{
			e -> logicoperation() -> accept(this);
		}
		virtual void visit(OperationRule1* e)
		{
			e -> eq() -> accept(this);
		}
		virtual void visit(LogicOperationRule2* e)
		{
			e -> logiccomp() -> accept(this);
		}
		virtual void visit(LogicOperationRule1* e)
		{
			e -> logicop() -> accept(this);
		}
		virtual void visit(VarForRule3* e)
		{
			cout << "(";
			cout << ";";
		}
		virtual void visit(VarForRule2* e)
		{
			cout << "(";
			cout << "L_ID";
			cout << "=";
			e -> operation() -> accept(this);
			cout << ";";
		}
		virtual void visit(VarForRule1* e)
		{
			cout << "(";
			e -> variablestypes() -> accept(this);
			cout << "L_ID";
			cout << "=";
			e -> operation() -> accept(this);
			cout << ";";
		}
		virtual void visit(CommandRule2* e)
		{
			e -> line() -> accept(this);
			cout << ";";
		}
		virtual void visit(CommandRule1* e)
		{
			cout << "{";
			e -> localbody() -> accept(this);
			cout << "}";
		}
		virtual void visit(ForClause* e)
		{
			cout << "para";
			e -> varfor() -> accept(this);
			e -> logicoperation() -> accept(this);
			cout << ";";
			e -> unitaryoperators() -> accept(this);
			cout << ")";
			e -> command() -> accept(this);
		}
		virtual void visit(WhileClause* e)
		{
			cout << "enquanto";
			cout << "(";
			e -> logicoperation() -> accept(this);
			cout << ")";
			e -> command() -> accept(this);
		}
		virtual void visit(IfElseClause* e)
		{
			cout << "entretanto";
			cout << "(";
			e -> logicoperation() -> accept(this);
			cout << ")";
			e -> command() -> accept(this);
		}
		virtual void visit(ElseClause* e)
		{
			cout << "entao";
			e -> command() -> accept(this);
		}
		virtual void visit(DigitalWriteClauseRule2* e)
		{
			e -> t_digitalwrite() -> accept(this);
			cout << "(";
			e -> values() -> accept(this);
			cout << "int";
			cout << ".";
			cout << "BAIXO";
			cout << ")";
			cout << ";";
		}
		virtual void visit(DigitalWriteClauseRule1* e)
		{
			e -> t_digitalwrite() -> accept(this);
			cout << "(";
			e -> values() -> accept(this);
			cout << "int";
			cout << ".";
			cout << "ALTO";
			cout << ")";
			cout << ";";
		}
		virtual void visit(PinModeClauseRule2* e)
		{
			e -> t_pinmode() -> accept(this);
			cout << "(";
			e -> values() -> accept(this);
			cout << "int";
			cout << ".";
			cout << "SAIDA";
			cout << ")";
			cout << ";";
		}
		virtual void visit(PinModeClauseRule1* e)
		{
			e -> t_pinmode() -> accept(this);
			cout << "(";
			e -> values() -> accept(this);
			cout << "int";
			cout << ".";
			cout << "ENTRADA";
			cout << ")";
			cout << ";";
		}
		virtual void visit(IfClause* e)
		{
			cout << "se";
			cout << "(";
			e -> logicoperation() -> accept(this);
			cout << ")";
			e -> command() -> accept(this);
		}
		virtual void visit(IfElseClausesRule2* e)
		{
			e -> ifelseclause() -> accept(this);
		}
		virtual void visit(IfElseClausesRule1* e)
		{
			e -> ifelseclause() -> accept(this);
			e -> ifelseclauses() -> accept(this);
		}
		virtual void visit(ElseClausesRule2* e)
		{
			e -> elseclause() -> accept(this);
		}
		virtual void visit(ElseClausesRule1* e)
		{
			e -> ifelseclauses() -> accept(this);
			e -> elseclause() -> accept(this);
		}
		virtual void visit(SelectionClauseRule2* e)
		{
			e -> ifclause() -> accept(this);
			e -> elseclauses() -> accept(this);
		}
		virtual void visit(SelectionClauseRule1* e)
		{
			e -> ifclause() -> accept(this);
		}
		virtual void visit(SetupRule2* e)
		{
			cout << "inicio";
			cout << "(";
			cout << ")";
			e -> mainbody() -> accept(this);
		}
		virtual void visit(SetupRule1* e)
		{
			cout << "inicio";
			cout << "(";
			cout << ")";
			cout << "}";
			cout << "{";
		}
		virtual void visit(LoopRule2* e)
		{
			cout << "repeticao";
			cout << "(";
			cout << ")";
			cout << "}";
			e -> mainbody() -> accept(this);
			e -> loop() -> accept(this);
			cout << "{";
		}
		virtual void visit(LoopRule1* e)
		{
			cout << "repeticao";
			cout << "(";
			cout << ")";
			cout << "}";
			e -> loop() -> accept(this);
			cout << "{";
		}
		virtual void visit(CondictionRule3* e)
		{
			e -> forclause() -> accept(this);
		}
		virtual void visit(CondictionRule2* e)
		{
			e -> whileclause() -> accept(this);
		}
		virtual void visit(CondictionRule1* e)
		{
			e -> selectionclause() -> accept(this);
		}
		virtual void visit(LineRule3* e)
		{
			e -> condiction() -> accept(this);
		}
		virtual void visit(LineRule2* e)
		{
			e -> var() -> accept(this);
		}
		virtual void visit(LineRule1* e)
		{
			e -> operation() -> accept(this);
		}
		virtual void visit(LocalBodyRule2* e)
		{
			e -> line() -> accept(this);
			cout << ";";
		}
		virtual void visit(LocalBodyRule1* e)
		{
			e -> line() -> accept(this);
			cout << ";";
			e -> localbody() -> accept(this);
		}
		virtual void visit(BodyRule2* e)
		{
			cout << "{";
			cout << "}";
		}
		virtual void visit(BodyRule1* e)
		{
			cout << "{";
			e -> localbody() -> accept(this);
			cout << "}";
		}
		virtual void visit(ParametersRule2* e)
		{
			e -> var() -> accept(this);
		}
		virtual void visit(ParametersRule1* e)
		{
			e -> var() -> accept(this);
			cout << ".";
			e -> parameters() -> accept(this);
		}
		virtual void visit(ParameterRule2* e)
		{
			cout << "(";
			cout << ")";
		}
		virtual void visit(ParameterRule1* e)
		{
			cout << "(";
			e -> parameters() -> accept(this);
			cout << ")";
		}
		virtual void visit(FunctionRule2* e)
		{
			cout << "funcao";
			e -> variablestypes() -> accept(this);
			cout << "L_ID";
			e -> parameters() -> accept(this);
			cout << ";";
		}
		virtual void visit(FunctionRule1* e)
		{
			cout << "funcao";
			e -> variablestypes() -> accept(this);
			cout << "L_ID";
			e -> parameters() -> accept(this);
			e -> body() -> accept(this);
		}
		virtual void visit(MainArduino* e)
		{
			e -> setup() -> accept(this);
			cout << ";";
			e -> loop() -> accept(this);
			cout << ";";
		}
		virtual void visit(MainBodyRule4* e)
		{
			e -> var() -> accept(this);
			cout << ";";
		}
		virtual void visit(MainBodyRule3* e)
		{
			e -> function() -> accept(this);
		}
		virtual void visit(MainBodyRule2* e)
		{
			e -> var() -> accept(this);
			cout << ";";
			e -> mainbody() -> accept(this);
		}
		virtual void visit(MainBodyRule1* e)
		{
			e -> function() -> accept(this);
			e -> mainbody() -> accept(this);
		}
};
#endif