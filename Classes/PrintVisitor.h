#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H

#include <IOstream>
#include<Visitor.h>

class PrintVisitor : public Visitor 
{
	public:
		virtual void visit(program* e)
		{
			e -> mainbody() -> accept(this);
		}
		virtual void visit(MainBodyRule1* e)
		{
			e -> function() -> accept(this);
			e -> mainbody() -> accept(this);
		}
		virtual void visit(MainBodyRule2* e)
		{
			e -> var() -> accept(this);
			std::cout << ";";
			e -> mainbody() -> accept(this);
		}
		virtual void visit(MainBodyRule3* e)
		{
			e -> function() -> accept(this);
		}
		virtual void visit(MainBodyRule4* e)
		{
			e -> var() -> accept(this);
			std::cout << ";";
		}
		virtual void visit(MainArduino* e)
		{
			e -> setup() -> accept(this);
			std::cout << ";";
			e -> loop() -> accept(this);
			std::cout << ";";
		}
		virtual void visit(FunctionRule1* e)
		{
			std::cout << "funcao";
			e -> variablestypes() -> accept(this);
			std::cout << "L_ID";
			e -> parameters() -> accept(this);
			e -> body() -> accept(this);
		}
		virtual void visit(FunctionRule2* e)
		{
			std::cout << "funcao";
			e -> variablestypes() -> accept(this);
			std::cout << "L_ID";
			e -> parameters() -> accept(this);
			std::cout << ";";
		}
		virtual void visit(ParameterRule1* e)
		{
			std::cout << "(";
			e -> parameters() -> accept(this);
			std::cout << ")";
		}
		virtual void visit(ParameterRule2* e)
		{
			std::cout << "(";
			std::cout << ")";
		}
		virtual void visit(ParametersRule1* e)
		{
			e -> var() -> accept(this);
			std::cout << ".";
			e -> parameters() -> accept(this);
		}
		virtual void visit(ParametersRule2* e)
		{
			e -> var() -> accept(this);
		}
		virtual void visit(BodyRule1* e)
		{
			std::cout << "{";
			e -> localbody() -> accept(this);
			std::cout << "}";
		}
		virtual void visit(BodyRule2* e)
		{
			std::cout << "{";
			std::cout << "}";
		}
		virtual void visit(LocalBodyRule1* e)
		{
			e -> line() -> accept(this);
			std::cout << ";";
			e -> localbody() -> accept(this);
		}
		virtual void visit(LocalBodyRule2* e)
		{
			e -> line() -> accept(this);
			std::cout << ";";
		}
		virtual void visit(LineRule1* e)
		{
			e -> operation() -> accept(this);
		}
		virtual void visit(LineRule2* e)
		{
			e -> var() -> accept(this);
		}
		virtual void visit(LineRule3* e)
		{
			e -> condiction() -> accept(this);
		}
		virtual void visit(CondictionRule1* e)
		{
			e -> selectionclause() -> accept(this);
		}
		virtual void visit(CondictionRule2* e)
		{
			e -> whileclause() -> accept(this);
		}
		virtual void visit(CondictionRule3* e)
		{
			e -> forclause() -> accept(this);
		}
		virtual void visit(LoopRule1* e)
		{
			std::cout << "repeticao";
			std::cout << "(";
			std::cout << ")";
			std::cout << "}";
			e -> loop() -> accept(this);
			std::cout << "{";
		}
		virtual void visit(LoopRule2* e)
		{
			std::cout << "repeticao";
			std::cout << "(";
			std::cout << ")";
			std::cout << "}";
			e -> mainbody() -> accept(this);
			e -> loop() -> accept(this);
			std::cout << "{";
		}
		virtual void visit(SetupRule1* e)
		{
			std::cout << "inicio";
			std::cout << "(";
			std::cout << ")";
			std::cout << "}";
			std::cout << "{";
		}
		virtual void visit(SetupRule2* e)
		{
			std::cout << "inicio";
			std::cout << "(";
			std::cout << ")";
			e -> mainbody() -> accept(this);
		}
		virtual void visit(SelectionClauseRule1* e)
		{
			e -> ifclause() -> accept(this);
		}
		virtual void visit(SelectionClauseRule2* e)
		{
			e -> ifclause() -> accept(this);
			e -> elseclauses() -> accept(this);
		}
		virtual void visit(ElseClausesRule1* e)
		{
			e -> ifelseclauses() -> accept(this);
			e -> elseclause() -> accept(this);
		}
		virtual void visit(ElseClausesRule2* e)
		{
			e -> elseclause() -> accept(this);
		}
		virtual void visit(IfElseClausesRule1* e)
		{
			e -> ifelseclause() -> accept(this);
			e -> ifelseclauses() -> accept(this);
		}
		virtual void visit(IfElseClausesRule2* e)
		{
			e -> ifelseclause() -> accept(this);
		}
		virtual void visit(IfClause* e)
		{
			std::cout << "se";
			std::cout << "(";
			e -> logicoperation() -> accept(this);
			std::cout << ")";
			e -> command() -> accept(this);
		}
		virtual void visit(PinModeClauseRule1* e)
		{
			std::cout << "T_PINMODE";
			std::cout << "(";
			e -> values() -> accept(this);
			std::cout << "int";
			std::cout << ".";
			std::cout << "ENTRADA";
			std::cout << ")";
			std::cout << ";";
		}
		virtual void visit(PinModeClauseRule2* e)
		{
			std::cout << "T_PINMODE";
			std::cout << "(";
			e -> values() -> accept(this);
			std::cout << "int";
			std::cout << ".";
			std::cout << "SAIDA";
			std::cout << ")";
			std::cout << ";";
		}
		virtual void visit(DigitalWriteClauseRule1* e)
		{
			std::cout << "T_DIGITALWRITE";
			std::cout << "(";
			e -> values() -> accept(this);
			std::cout << "int";
			std::cout << ".";
			std::cout << "ALTO";
			std::cout << ")";
			std::cout << ";";
		}
		virtual void visit(DigitalWriteClauseRule2* e)
		{
			std::cout << "T_DIGITALWRITE";
			std::cout << "(";
			e -> values() -> accept(this);
			std::cout << "int";
			std::cout << ".";
			std::cout << "BAIXO";
			std::cout << ")";
			std::cout << ";";
		}
		virtual void visit(ElseClause* e)
		{
			std::cout << "entao";
			e -> command() -> accept(this);
		}
		virtual void visit(IfElseClause* e)
		{
			std::cout << "entretanto";
			std::cout << "(";
			e -> logicoperation() -> accept(this);
			std::cout << ")";
			e -> command() -> accept(this);
		}
		virtual void visit(WhileClause* e)
		{
			std::cout << "enquanto";
			std::cout << "(";
			e -> logicoperation() -> accept(this);
			std::cout << ")";
			e -> command() -> accept(this);
		}
		virtual void visit(ForClause* e)
		{
			std::cout << "para";
			e -> varfor() -> accept(this);
			e -> logicoperation() -> accept(this);
			std::cout << ";";
			e -> unitaryoperators() -> accept(this);
			std::cout << ")";
			e -> command() -> accept(this);
		}
		virtual void visit(CommandRule1* e)
		{
			std::cout << "{";
			e -> localbody() -> accept(this);
			std::cout << "}";
		}
		virtual void visit(CommandRule2* e)
		{
			e -> line() -> accept(this);
			std::cout << ";";
		}
		virtual void visit(VarForRule1* e)
		{
			std::cout << "(";
			e -> variablestypes() -> accept(this);
			std::cout << "L_ID";
			std::cout << "=";
			e -> operation() -> accept(this);
			std::cout << ";";
		}
		virtual void visit(VarForRule2* e)
		{
			std::cout << "(";
			std::cout << "L_ID";
			std::cout << "=";
			e -> operation() -> accept(this);
			std::cout << ";";
		}
		virtual void visit(VarForRule3* e)
		{
			std::cout << "(";
			std::cout << ";";
		}
		virtual void visit(LogicOperationRule1* e)
		{
			e -> logicop() -> accept(this);
		}
		virtual void visit(LogicOperationRule2* e)
		{
			e -> logiccomp() -> accept(this);
		}
		virtual void visit(OperationRule1* e)
		{
			e -> eq() -> accept(this);
		}
		virtual void visit(OperationRule2* e)
		{
			e -> logicoperation() -> accept(this);
		}
		virtual void visit(OperationRule3* e)
		{
			e -> unitaryoperators() -> accept(this);
		}
		virtual void visit(UnitaryOperatorsRule1* e)
		{
			e -> values() -> accept(this);
			std::cout << "++";
		}
		virtual void visit(UnitaryOperatorsRule2* e)
		{
			e -> values() -> accept(this);
			std::cout << "--";
		}
		virtual void visit(LogicCompRule1* e)
		{
			e -> eq() -> accept(this);
			e -> binarycompoperator() -> accept(this);
			e -> eq() -> accept(this);
		}
		virtual void visit(LogicCompRule2* e)
		{
			std::cout << "(";
			e -> logiccomp() -> accept(this);
			std::cout << ")";
		}
		virtual void visit(BinaryCompOperatorRule1* e)
		{
			std::cout << ">";
		}
		virtual void visit(BinaryCompOperatorRule2* e)
		{
			std::cout << "<";
		}
		virtual void visit(BinaryCompOperatorRule3* e)
		{
			std::cout << ">=";
		}
		virtual void visit(BinaryCompOperatorRule4* e)
		{
			std::cout << "<=";
		}
		virtual void visit(LogicOPRule1* e)
		{
			e -> logicop() -> accept(this);
			e -> binarylogicaloperator() -> accept(this);
			e -> logicop() -> accept(this);
		}
		virtual void visit(LogicOPRule2* e)
		{
			e -> unitarylogicaloperator() -> accept(this);
			e -> logicop() -> accept(this);
		}
		virtual void visit(LogicOPRule3* e)
		{
			e -> l_bool() -> accept(this);
		}
		virtual void visit(LogicOPRule4* e)
		{
			std::cout << "(";
			e -> logicop() -> accept(this);
			std::cout << ")";
		}
		virtual void visit(BinaryLogicalOperatorRule1* e)
		{
			std::cout << "e";
		}
		virtual void visit(BinaryLogicalOperatorRule2* e)
		{
			std::cout << "ou";
		}
		virtual void visit(UnitaryLogicalOperator* e)
		{
			std::cout << "nao";
		}
		virtual void visit(EqRule1* e)
		{
			e -> eq() -> accept(this);
			std::cout << "+";
			e -> factor() -> accept(this);
		}
		virtual void visit(EqRule2* e)
		{
			e -> eq() -> accept(this);
			std::cout << "-";
			e -> factor() -> accept(this);
		}
		virtual void visit(EqRule3* e)
		{
			e -> factor() -> accept(this);
		}
		virtual void visit(FactorRule1* e)
		{
			e -> factor() -> accept(this);
			std::cout << "/";
			e -> elem() -> accept(this);
		}
		virtual void visit(FactorRule2* e)
		{
			e -> factor() -> accept(this);
			std::cout << "*";
			e -> elem() -> accept(this);
		}
		virtual void visit(FactorRule3* e)
		{
			e -> elem() -> accept(this);
		}
		virtual void visit(ElemRule1* e)
		{
			std::cout << "+";
			e -> elem() -> accept(this);
		}
		virtual void visit(ElemRule2* e)
		{
			std::cout << "-";
			e -> elem() -> accept(this);
		}
		virtual void visit(ElemRule3* e)
		{
			std::cout << "(";
			e -> eq() -> accept(this);
			std::cout << ")";
		}
		virtual void visit(ElemRule4* e)
		{
			e -> values() -> accept(this);
		}
		virtual void visit(ValuesRule1* e)
		{
			e -> l_int() -> accept(this);
		}
		virtual void visit(ValuesRule2* e)
		{
			e -> l_float() -> accept(this);
		}
		virtual void visit(ValuesRule3* e)
		{
			e -> l_double() -> accept(this);
		}
		virtual void visit(ValuesRule4* e)
		{
			e -> l_char() -> accept(this);
		}
		virtual void visit(ValuesRule5* e)
		{
			e -> l_string() -> accept(this);
		}
		virtual void visit(ValuesRule6* e)
		{
			e -> l_bool() -> accept(this);
		}
		virtual void visit(ValuesRule7* e)
		{
			std::cout << "L_ID";
		}
		virtual void visit(VarRule1* e)
		{
			e -> variablestypes() -> accept(this);
			std::cout << "L_ID";
		}
		virtual void visit(VarRule2* e)
		{
			e -> variablestypes() -> accept(this);
			std::cout << "L_ID";
			std::cout << "=";
			e -> operation() -> accept(this);
		}
		virtual void visit(VariablesTypesRule1* e)
		{
			std::cout << "double";
		}
		virtual void visit(VariablesTypesRule2* e)
		{
			std::cout << "int";
		}
		virtual void visit(VariablesTypesRule3* e)
		{
			std::cout << "float";
		}
		virtual void visit(VariablesTypesRule4* e)
		{
			std::cout << "char";
		}
		virtual void visit(VariablesTypesRule5* e)
		{
			std::cout << "string";
		}
		virtual void visit(VariablesTypesRule6* e)
		{
			std::cout << "boolean";
		}
};
#endif