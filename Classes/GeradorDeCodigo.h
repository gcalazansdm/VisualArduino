#ifndef GeradorDecodigo_H
#define GeradorDecodigo_H

#include "Visitor.h"
#include <string>
#include <sstream>

class GeradorDeCodigo : public Visitor 
{
	private:
		int i = 0;
		std::stringstream arquivo;
	public:
		virtual void visit(program* e)
		{
			i = 0;
			printf("%s\n", "oi");
			FILE *file = fopen("123.txt", "w+");
			printf("%s\n", "oi");
			e -> mainbody() -> accept(this);
			printf("%s\n", "oi");
			fprintf(file, "%s", arquivo.str().c_str());
			printf("%s\n", "oi");
			fclose(file);
		}
		virtual void visit(MainBodyRule1* e)
		{
			e -> function() -> accept(this);
			e -> mainbody() -> accept(this);
		}
		virtual void visit(MainBodyRule2* e)
		{
			e -> var() -> accept(this);
			arquivo << ";";
			e -> mainbody() -> accept(this);
		}
		virtual void visit(MainBodyRule3* e)
		{
			e -> function() -> accept(this);
		}
		virtual void visit(MainBodyRule4* e)
		{
			e -> var() -> accept(this);
			arquivo << ";";
		}
		virtual void visit(MainArduino* e)
		{
			e -> setup() -> accept(this);
			arquivo << ";";
			e -> loop() -> accept(this);
			arquivo << ";";
		}
		virtual void visit(FunctionRule1* e)
		{
			arquivo << "funcao";
			e -> variablestypes() -> accept(this);
			arquivo << "L_ID";
			e -> parameters() -> accept(this);
			e -> body() -> accept(this);
		}
		virtual void visit(FunctionRule2* e)
		{
			arquivo << "funcao";
			e -> variablestypes() -> accept(this);
			arquivo << "L_ID";
			e -> parameters() -> accept(this);
			arquivo << ";";
		}
		virtual void visit(ParameterRule1* e)
		{
			arquivo << "(";
			e -> parameters() -> accept(this);
			arquivo << ")";
		}
		virtual void visit(ParameterRule2* e)
		{
			arquivo << "(";
			arquivo << ")";
		}
		virtual void visit(ParametersRule1* e)
		{
			e -> var() -> accept(this);
			arquivo << ".";
			e -> parameters() -> accept(this);
		}
		virtual void visit(ParametersRule2* e)
		{
			e -> var() -> accept(this);
		}
		virtual void visit(BodyRule1* e)
		{
			arquivo << "{";
			e -> localbody() -> accept(this);
			arquivo << "}";
		}
		virtual void visit(BodyRule2* e)
		{
			arquivo << "{";
			arquivo << "}";
		}
		virtual void visit(LocalBodyRule1* e)
		{
			e -> line() -> accept(this);
			arquivo << ";";
			e -> localbody() -> accept(this);
		}
		virtual void visit(LocalBodyRule2* e)
		{
			e -> line() -> accept(this);
			arquivo << ";";
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
			arquivo << "repeticao";
			arquivo << "(";
			arquivo << ")";
			arquivo << "}";
			e -> loop() -> accept(this);
			arquivo << "{";
		}
		virtual void visit(LoopRule2* e)
		{
			arquivo << "repeticao";
			arquivo << "(";
			arquivo << ")";
			arquivo << "}";
			e -> mainbody() -> accept(this);
			e -> loop() -> accept(this);
			arquivo << "{";
		}
		virtual void visit(SetupRule1* e)
		{
			arquivo << "inicio";
			arquivo << "(";
			arquivo << ")";
			arquivo << "}";
			arquivo << "{";
		}
		virtual void visit(SetupRule2* e)
		{
			arquivo << "inicio";
			arquivo << "(";
			arquivo << ")";
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
			arquivo << "se";
			arquivo << "(";
			e -> logicoperation() -> accept(this);
			arquivo << ")";
			e -> command() -> accept(this);
		}
		virtual void visit(PinModeClauseRule1* e)
		{
			arquivo << "T_PINMODE";
			arquivo << "(";
			e -> values() -> accept(this);
			arquivo << "int";
			arquivo << ".";
			arquivo << "ENTRADA";
			arquivo << ")";
			arquivo << ";";
		}
		virtual void visit(PinModeClauseRule2* e)
		{
			arquivo << "T_PINMODE";
			arquivo << "(";
			e -> values() -> accept(this);
			arquivo << "int";
			arquivo << ".";
			arquivo << "SAIDA";
			arquivo << ")";
			arquivo << ";";
		}
		virtual void visit(DigitalWriteClauseRule1* e)
		{
			arquivo << "T_DIGITALWRITE";
			arquivo << "(";
			e -> values() -> accept(this);
			arquivo << "int";
			arquivo << ".";
			arquivo << "ALTO";
			arquivo << ")";
			arquivo << ";";
		}
		virtual void visit(DigitalWriteClauseRule2* e)
		{
			arquivo << "T_DIGITALWRITE";
			arquivo << "(";
			e -> values() -> accept(this);
			arquivo << "int";
			arquivo << ".";
			arquivo << "BAIXO";
			arquivo << ")";
			arquivo << ";";
		}
		virtual void visit(ElseClause* e)
		{
			arquivo << "entao";
			e -> command() -> accept(this);
		}
		virtual void visit(IfElseClause* e)
		{
			arquivo << "entretanto";
			arquivo << "(";
			e -> logicoperation() -> accept(this);
			arquivo << ")";
			e -> command() -> accept(this);
		}
		virtual void visit(WhileClause* e)
		{
			arquivo << "enquanto";
			arquivo << "(";
			e -> logicoperation() -> accept(this);
			arquivo << ")";
			e -> command() -> accept(this);
		}
		virtual void visit(ForClause* e)
		{
			arquivo << "para";
			e -> varfor() -> accept(this);
			e -> logicoperation() -> accept(this);
			arquivo << ";";
			e -> unitaryoperators() -> accept(this);
			arquivo << ")";
			e -> command() -> accept(this);
		}
		virtual void visit(CommandRule1* e)
		{
			arquivo << "{";
			e -> localbody() -> accept(this);
			arquivo << "}";
		}
		virtual void visit(CommandRule2* e)
		{
			e -> line() -> accept(this);
			arquivo << ";";
		}
		virtual void visit(VarForRule1* e)
		{
			arquivo << "(";
			e -> variablestypes() -> accept(this);
			arquivo << "L_ID";
			arquivo << "=";
			e -> operation() -> accept(this);
			arquivo << ";";
		}
		virtual void visit(VarForRule2* e)
		{
			arquivo << "(";
			arquivo << "L_ID";
			arquivo << "=";
			e -> operation() -> accept(this);
			arquivo << ";";
		}
		virtual void visit(VarForRule3* e)
		{
			arquivo << "(";
			arquivo << ";";
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
			arquivo << "++";
		}
		virtual void visit(UnitaryOperatorsRule2* e)
		{
			e -> values() -> accept(this);
			arquivo << "--";
		}
		virtual void visit(LogicCompRule1* e)
		{
			e -> eq() -> accept(this);
			e -> binarycompoperator() -> accept(this);
			e -> eq() -> accept(this);
		}
		virtual void visit(LogicCompRule2* e)
		{
			arquivo << "(";
			e -> logiccomp() -> accept(this);
			arquivo << ")";
		}
		virtual void visit(BinaryCompOperatorRule1* e)
		{
			arquivo << ">";
		}
		virtual void visit(BinaryCompOperatorRule2* e)
		{
			arquivo << "<";
		}
		virtual void visit(BinaryCompOperatorRule3* e)
		{
			arquivo << ">=";
		}
		virtual void visit(BinaryCompOperatorRule4* e)
		{
			arquivo << "<=";
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
			arquivo << "L_BOOL";
		}
		virtual void visit(LogicOPRule4* e)
		{
			arquivo << "(";
			e -> logicop() -> accept(this);
			arquivo << ")";
		}
		virtual void visit(BinaryLogicalOperatorRule1* e)
		{
			arquivo << "e";
		}
		virtual void visit(BinaryLogicalOperatorRule2* e)
		{
			arquivo << "ou";
		}
		virtual void visit(UnitaryLogicalOperator* e)
		{
			arquivo << "nao";
		}
		virtual void visit(EqRule1* e)
		{
			e -> eq() -> accept(this);
			arquivo << "+";
			e -> factor() -> accept(this);
		}
		virtual void visit(EqRule2* e)
		{
			e -> eq() -> accept(this);
			arquivo << "-";
			e -> factor() -> accept(this);
		}
		virtual void visit(EqRule3* e)
		{
			e -> factor() -> accept(this);
		}
		virtual void visit(FactorRule1* e)
		{
			e -> factor() -> accept(this);
			arquivo << "/";
			e -> elem() -> accept(this);
		}
		virtual void visit(FactorRule2* e)
		{
			e -> factor() -> accept(this);
			arquivo << "*";
			e -> elem() -> accept(this);
		}
		virtual void visit(FactorRule3* e)
		{
			e -> elem() -> accept(this);
		}
		virtual void visit(ElemRule1* e)
		{
			arquivo << "+";
			e -> elem() -> accept(this);
		}
		virtual void visit(ElemRule2* e)
		{
			arquivo << "-";
			e -> elem() -> accept(this);
		}
		virtual void visit(ElemRule3* e)
		{
			arquivo << "(";
			e -> eq() -> accept(this);
			arquivo << ")";
		}
		virtual void visit(ElemRule4* e)
		{
			e -> values() -> accept(this);
		}
		virtual void visit(ValuesRule1* e)
		{
			arquivo << "L_INT";
		}
		virtual void visit(ValuesRule2* e)
		{
			arquivo << "L_FLOAT";
		}
		virtual void visit(ValuesRule3* e)
		{
			arquivo << "L_DOUBLE";
		}
		virtual void visit(ValuesRule4* e)
		{
			arquivo << "L_CHAR";
		}
		virtual void visit(ValuesRule5* e)
		{
			arquivo << "L_STRING";
		}
		virtual void visit(ValuesRule6* e)
		{
			arquivo << "L_BOOL";
		}
		virtual void visit(ValuesRule7* e)
		{
			arquivo << "L_ID";
		}
		virtual void visit(VarRule1* e)
		{
			e -> variablestypes() -> accept(this);
			arquivo << "L_ID";
		}
		virtual void visit(VarRule2* e)
		{
			e -> variablestypes() -> accept(this);
			arquivo << "L_ID";
			arquivo << "=";
			e -> operation() -> accept(this);
		}
		virtual void visit(VariablesTypesRule1* e)
		{
			arquivo << "double";
		}
		virtual void visit(VariablesTypesRule2* e)
		{
			arquivo << "int";
		}
		virtual void visit(VariablesTypesRule3* e)
		{
			arquivo << "float";
		}
		virtual void visit(VariablesTypesRule4* e)
		{
			arquivo << "char";
		}
		virtual void visit(VariablesTypesRule5* e)
		{
			arquivo << "string";
		}
		virtual void visit(VariablesTypesRule6* e)
		{
			arquivo << "boolean";
		}
};
#endif
