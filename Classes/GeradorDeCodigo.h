#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H

#include <Visitor.h>
#include <string>

class PrintVisitor : public Visitor 
{
	private:
		int i = 0;
		std::string arquivo = "";
	public:
		virtual void visit(program* e)
		{
			arquivo = "";
			i = 0;
			FILE *file = fopen(argv[1], "w");
			e -> mainbody() -> accept(this);
			fwrite(file,arquivo);
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
			sprintf(arquivo,";");
			e -> mainbody() -> accept(this);
		}
		virtual void visit(MainBodyRule3* e)
		{
			e -> function() -> accept(this);
		}
		virtual void visit(MainBodyRule4* e)
		{
			e -> var() -> accept(this);
			sprintf(arquivo,";");
		}
		virtual void visit(MainArduino* e)
		{
			e -> setup() -> accept(this);
			sprintf(arquivo,";");
			e -> loop() -> accept(this);
			sprintf(arquivo,";");
		}
		virtual void visit(FunctionRule1* e)
		{
			sprintf(arquivo,"");
			e -> variablestypes() -> accept(this);
			sprintf(arquivo,"%s%d","L_ID",i++);
			e -> parameters() -> accept(this);
			e -> body() -> accept(this);
		}
		virtual void visit(FunctionRule2* e)
		{
			sprintf(arquivo,"");
			e -> variablestypes() -> accept(this);
			sprintf(arquivo,"%s%d","L_ID",i++);
			e -> parameters() -> accept(this);
			sprintf(arquivo,";");
		}
		virtual void visit(ParameterRule1* e)
		{
			sprintf(arquivo,"(");
			e -> parameters() -> accept(this);
			sprintf(arquivo,")";
		}
		virtual void visit(ParameterRule2* e)
		{
			std::cout << "(";
			std::cout << ")";
		}
		virtual void visit(ParametersRule1* e)
		{
			e -> var() -> accept(this);
			sprintf(arquivo,"%s",".");
			e -> parameters() -> accept(this);
		}
		virtual void visit(ParametersRule2* e)
		{
			e -> var() -> accept(this);
		}
		virtual void visit(BodyRule1* e)
		{
			sprintf(arquivo,"%s","{");
			e -> localbody() -> accept(this);
			sprintf(arquivo,"%s","}");
		}
		virtual void visit(BodyRule2* e)
		{
			sprintf(arquivo,"%s","{");
			sprintf(arquivo,"%s","}");	
		}
		virtual void visit(LocalBodyRule1* e)
		{
			e -> line() -> accept(this);
			sprintf(arquivo,"%s",";");
			e -> localbody() -> accept(this);
		}
		virtual void visit(LocalBodyRule2* e)
		{
			e -> line() -> accept(this);
			sprintf(arquivo,"%s",";");
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
		
			sprintf(arquivo,"%s","while");
			sprintf(arquivo,"%s","(");
			sprintf(arquivo,"%s","True");
			sprintf(arquivo,"%s",")");
			sprintf(arquivo,"%s","{");
			e -> loop() -> accept(this);
			sprintf(arquivo,"%s","}");
		}
		virtual void visit(LoopRule2* e)
		{
			sprintf(arquivo,"%s","while");
			sprintf(arquivo,"%s","(");
			sprintf(arquivo,"%s","True");
			sprintf(arquivo,"%s",")");
			sprintf(arquivo,"%s","{");
			e -> mainbody() -> accept(this);
			e -> loop() -> accept(this);
			sprintf(arquivo,"%s","}");
		}
		virtual void visit(SetupRule1* e)
		{
			sprintf(arquivo,"%s","setup");
			sprintf(arquivo,"%s","{");
			sprintf(arquivo,"%s","}");
		}
		virtual void visit(SetupRule2* e)
		{
		
			sprintf(arquivo,"%s","setup");
			sprintf(arquivo,"%s","{");
			e -> mainbody() -> accept(this);
			sprintf(arquivo,"%s","}");
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
			sprintf(arquivo,"%s","if");
			sprintf(arquivo,"%s","(");
			e -> logicoperation() -> accept(this);
			sprintf(arquivo,"%s",")");
			e -> command() -> accept(this);
		}
		virtual void visit(PinModeClauseRule1* e)
		{
			sprintf(arquivo,"%s","Pinmode");
			sprintf(arquivo,"%s","(");
			e -> values() -> accept(this);
			sprintf(arquivo,"%s","int");
			sprintf(arquivo,"%s",".");
			sprintf(arquivo,"%s","in");
			sprintf(arquivo,"%s",");");
		}
		virtual void visit(PinModeClauseRule2* e)
		{
			sprintf(arquivo,"%s","Pinmode");
			sprintf(arquivo,"%s","(");
			e -> values() -> accept(this);
			sprintf(arquivo,"%s","int");
			sprintf(arquivo,"%s",".");
			sprintf(arquivo,"%s","out");
			sprintf(arquivo,"%s",");");
		}
		virtual void visit(DigitalWriteClauseRule1* e)
		{
			sprintf(arquivo,"%s","DigitalWrite");
			sprintf(arquivo,"%s","(");
			e -> values() -> accept(this);
			sprintf(arquivo,"%s","int");
			sprintf(arquivo,"%s",".");
			sprintf(arquivo,"%s","HIGH");
			sprintf(arquivo,"%s",");");
		}
		virtual void visit(DigitalWriteClauseRule2* e)
		{
			sprintf(arquivo,"%s","DigitalWrite");
			sprintf(arquivo,"%s","(");
			e -> values() -> accept(this);
			sprintf(arquivo,"%s","int");
			sprintf(arquivo,"%s",".");
			sprintf(arquivo,"%s","Low");
			sprintf(arquivo,"%s",");");
		}
		virtual void visit(ElseClause* e)
		{
			sprintf(arquivo,"%s","else");
			e -> command() -> accept(this);
		}
		virtual void visit(IfElseClause* e)
		{
			sprintf(arquivo,"%s","else if");
			sprintf(arquivo,"%s","(");
			e -> logicoperation() -> accept(this);
			sprintf(arquivo,"%s",")");
			e -> command() -> accept(this);
		}
		virtual void visit(WhileClause* e)
		{
			sprintf(arquivo,"%s","while");
			sprintf(arquivo,"%s","(");
			e -> logicoperation() -> accept(this);
			sprintf(arquivo,"%s",")");
			e -> command() -> accept(this);
		}
		virtual void visit(ForClause* e)
		{
			sprintf(arquivo,"%s","for");
			e -> varfor() -> accept(this);
			e -> logicoperation() -> accept(this);
			sprintf(arquivo,"%s",";");
			e -> unitaryoperators() -> accept(this);
			sprintf(arquivo,"%s",")");
			e -> command() -> accept(this);
		}
		virtual void visit(CommandRule1* e)
		{
			sprintf(arquivo,"%s","{");
			e -> localbody() -> accept(this);
			sprintf(arquivo,"%s","}");
		}
		virtual void visit(CommandRule2* e)
		{
			e -> line() -> accept(this);
			sprintf(arquivo,"%s",";");
		}
		virtual void visit(VarForRule1* e)
		{
			sprintf(arquivo,"%s","(");
			e -> variablestypes() -> accept(this);
			sprintf(arquivo,"%s%d","L_ID",i);
			sprintf(arquivo,"%s","=");
			e -> operation() -> accept(this);
			sprintf(arquivo,"%s",";");
		}
		virtual void visit(VarForRule2* e)
		{
			sprintf(arquivo,"%s","(");
			sprintf(arquivo,"%s%d","L_ID",i);
			sprintf(arquivo,"%s","=");
			e -> operation() -> accept(this);
			std::cout << ";";
		}
		virtual void visit(VarForRule3* e)
		{
			sprintf(arquivo,"%s","(");
			sprintf(arquivo,"%s",";");
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
			
			sprintf(arquivo,"%s","++");
		}
		virtual void visit(UnitaryOperatorsRule2* e)
		{
			e -> values() -> accept(this);
			
			sprintf(arquivo,"%s","--");
		}
		virtual void visit(LogicCompRule1* e)
		{
			e -> eq() -> accept(this);
			e -> binarycompoperator() -> accept(this);
			e -> eq() -> accept(this);
		}
		virtual void visit(LogicCompRule2* e)
		{
			sprintf(arquivo,"%s","(");
			e -> logiccomp() -> accept(this);
			sprintf(arquivo,"%s",")");
		}
		virtual void visit(BinaryCompOperatorRule1* e)
		{
			sprintf(arquivo,"%s",">");
		}
		virtual void visit(BinaryCompOperatorRule2* e)
		{
			sprintf(arquivo,"%s","<");
		}
		virtual void visit(BinaryCompOperatorRule3* e)
		{
			sprintf(arquivo,"%s",">=");
		}
		virtual void visit(BinaryCompOperatorRule4* e)
		{
			sprintf(arquivo,"%s","<=");
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
			sprintf(arquivo,"%s%d","L_BOOL",i);
		}
		virtual void visit(LogicOPRule4* e)
		{
			sprintf(arquivo,"%s","(");
			e -> logicop() -> accept(this);
			sprintf(arquivo,"%s",")");		
		}
		virtual void visit(BinaryLogicalOperatorRule1* e)
		{
			sprintf(arquivo,"%s","&&");
		}
		virtual void visit(BinaryLogicalOperatorRule2* e)
		{
			sprintf(arquivo,"%s","||");
		}
		virtual void visit(UnitaryLogicalOperator* e)
		{
			sprintf(arquivo,"%s","!");
		}
		virtual void visit(EqRule1* e)
		{
			e -> eq() -> accept(this);
			sprintf(arquivo,"%s","+");
			e -> factor() -> accept(this);
		}
		virtual void visit(EqRule2* e)
		{
			e -> eq() -> accept(this);
			sprintf(arquivo,"%s","-");
			e -> factor() -> accept(this);
		}
		virtual void visit(EqRule3* e)
		{
			e -> factor() -> accept(this);
		}
		virtual void visit(FactorRule1* e)
		{
			e -> factor() -> accept(this);
			sprintf(arquivo,"%s","/");
			e -> elem() -> accept(this);
		}
		virtual void visit(FactorRule2* e)
		{
			e -> factor() -> accept(this);
			sprintf(arquivo,"%s","*");
			e -> elem() -> accept(this);
		}
		virtual void visit(FactorRule3* e)
		{
			e -> elem() -> accept(this);
		}
		virtual void visit(ElemRule1* e)
		{
			sprintf(arquivo,"%s","+");
			e -> elem() -> accept(this);
		}
		virtual void visit(ElemRule2* e)
		{
			sprintf(arquivo,"%s","-");
			e -> elem() -> accept(this);
		}
		virtual void visit(ElemRule3* e)
		{
			sprintf(arquivo,"%s","(");
			e -> eq() -> accept(this);
			sprintf(arquivo,"%s",")");
		}
		virtual void visit(ElemRule4* e)
		{
			e -> values() -> accept(this);
		}
		virtual void visit(ValuesRule1* e)
		{
			sprintf(arquivo,"%s%d","L_INT",i);
		}
		virtual void visit(ValuesRule2* e)
		{
			sprintf(arquivo,"%s%d","L_FLOAT",i);
		}
		virtual void visit(ValuesRule3* e)
		{
			sprintf(arquivo,"%s%d", "L_DOUBLE",i);
		}
		virtual void visit(ValuesRule4* e)
		{
			sprintf(arquivo,"%s%d", "L_CHAR",i);
		}
		virtual void visit(ValuesRule5* e)
		{
			sprintf(arquivo,"%s%d", "L_STRING",i);
		}
		virtual void visit(ValuesRule6* e)
		{
			sprintf(arquivo,"%s%d", "L_BOOL",i);
		}
		virtual void visit(ValuesRule7* e)
		{
			sprintf(arquivo,"%s%d", "L_ID",i);	
		}
		virtual void visit(VarRule1* e)
		{
			e -> variablestypes() -> accept(this);
			sprintf(arquivo,"%s%d", "L_ID",i);
		}
		virtual void visit(VarRule2* e)
		{
			e -> variablestypes() -> accept(this);
			sprintf(arquivo,"%s%d", "L_ID",i);
			sprintf(arquivo,"%s", "=");
			e -> operation() -> accept(this);
		}
		virtual void visit(VariablesTypesRule1* e)
		{
			sprintf(arquivo,"%s", "double");
		}
		virtual void visit(VariablesTypesRule2* e)
		{
			sprintf(arquivo,"%s", "int");
		}
		virtual void visit(VariablesTypesRule3* e)
		{
			sprintf(arquivo,"%s", "float");
		}
		virtual void visit(VariablesTypesRule4* e)
		{
			sprintf(arquivo,"%s", "char");
		}
		virtual void visit(VariablesTypesRule5* e)
		{
			sprintf(arquivo,"%s", "string");
		}
		virtual void visit(VariablesTypesRule6* e)
		{
			sprintf(arquivo,"%s", "bolean");
		}
};
#endif