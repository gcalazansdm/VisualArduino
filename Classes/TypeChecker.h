#ifndef TYPECHECKER_H
#define TYPECHECKER_H
#include<math.h>
#include<Visitor.h>

class PrintVisitor : public Visitor 
{
	private:
		std::vector<Type>stack;
		std::vector<std::stringType>map;
	public:
		virtual void visit(VariablesTypesRule6* e)
		{
		}
		virtual void visit(VariablesTypesRule5* e)
		{
		}
		virtual void visit(VariablesTypesRule4* e)
		{
		}
		virtual void visit(VariablesTypesRule3* e)
		{
		}
		virtual void visit(VariablesTypesRule2* e)
		{
		}
		virtual void visit(VariablesTypesRule1* e)
		{
		}
		virtual void visit(VarRule2* e)
		{
			e -> variablestypes() -> accept(this);
//L_ID
			if(stack.empty())
			{
				throw TypeCheckExeption("Esperado Dado");
			}
			Type t1= stack.top();
			stack.pop();
			e -> operation() -> accept(this);
		}
		virtual void visit(VarRule1* e)
		{
			e -> variablestypes() -> accept(this);
//L_ID
			if(stack.empty())
			{
				throw TypeCheckExeption("Esperado Dado");
			}
			Type t1= stack.top();
			stack.pop();
		}
		virtual void visit(ValuesRule7* e)
		{
//L_ID
			if(stack.empty())
			{
				throw TypeCheckExeption("Esperado Dado");
			}
			Type t1= stack.top();
			stack.pop();
		}
		virtual void visit(ValuesRule6* e)
		{
//L_BOOL
			if(stack.empty())
			{
				throw TypeCheckExeption("Esperado Dado");
			}
			Type t1= stack.top();
			stack.pop();
		}
		virtual void visit(ValuesRule5* e)
		{
//L_STRING
			if(stack.empty())
			{
				throw TypeCheckExeption("Esperado Dado");
			}
			Type t1= stack.top();
			stack.pop();
		}
		virtual void visit(ValuesRule4* e)
		{
//L_CHAR
			if(stack.empty())
			{
				throw TypeCheckExeption("Esperado Dado");
			}
			Type t1= stack.top();
			stack.pop();
		}
		virtual void visit(ValuesRule3* e)
		{
//L_DOUBLE
			if(stack.empty())
			{
				throw TypeCheckExeption("Esperado Dado");
			}
			Type t1= stack.top();
			stack.pop();
		}
		virtual void visit(ValuesRule2* e)
		{
//L_FLOAT
			if(stack.empty())
			{
				throw TypeCheckExeption("Esperado Dado");
			}
			Type t1= stack.top();
			stack.pop();
		}
		virtual void visit(ValuesRule1* e)
		{
//L_INT
			if(stack.empty())
			{
				throw TypeCheckExeption("Esperado Dado");
			}
			Type t1= stack.top();
			stack.pop();
		}
		virtual void visit(ElemRule4* e)
		{
			e -> values() -> accept(this);
		}
		virtual void visit(ElemRule3* e)
		{
			e -> eq() -> accept(this);
		}
		virtual void visit(ElemRule2* e)
		{
			e -> elem() -> accept(this);
		}
		virtual void visit(ElemRule1* e)
		{
			e -> elem() -> accept(this);
		}
		virtual void visit(FactorRule3* e)
		{
			e -> elem() -> accept(this);
		}
		virtual void visit(FactorRule2* e)
		{
			e -> factor() -> accept(this);
			e -> elem() -> accept(this);
		}
		virtual void visit(FactorRule1* e)
		{
			e -> factor() -> accept(this);
			e -> elem() -> accept(this);
		}
		virtual void visit(EqRule3* e)
		{
			e -> factor() -> accept(this);
		}
		virtual void visit(EqRule2* e)
		{
			e -> eq() -> accept(this);
			e -> factor() -> accept(this);
		}
		virtual void visit(EqRule1* e)
		{
			e -> eq() -> accept(this);
			e -> factor() -> accept(this);
		}
		virtual void visit(UnitaryLogicalOperator* e)
		{
//OP_BOOL_NOT
			if(stack.empty())
			{
				throw TypeCheckExeption("Esperado Dado");
			}
			Type t1= stack.top();
			stack.pop();
		}
		virtual void visit(BinaryLogicalOperatorRule2* e)
		{
//OP_BOOL_OR
			if(stack.empty())
			{
				throw TypeCheckExeption("Esperado Dado");
			}
			Type t1= stack.top();
			stack.pop();
		}
		virtual void visit(BinaryLogicalOperatorRule1* e)
		{
//OP_BOOL_AND
			if(stack.empty())
			{
				throw TypeCheckExeption("Esperado Dado");
			}
			Type t1= stack.top();
			stack.pop();
		}
		virtual void visit(LogicOPRule4* e)
		{
			e -> logicop() -> accept(this);
		}
		virtual void visit(LogicOPRule3* e)
		{
//L_BOOL
			if(stack.empty())
			{
				throw TypeCheckExeption("Esperado Dado");
			}
			Type t1= stack.top();
			stack.pop();
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
//OP_BOOL_EQLESS
			if(stack.empty())
			{
				throw TypeCheckExeption("Esperado Dado");
			}
			Type t1= stack.top();
			stack.pop();
		}
		virtual void visit(BinaryCompOperatorRule3* e)
		{
//OP_BOOL_EQGRE
			if(stack.empty())
			{
				throw TypeCheckExeption("Esperado Dado");
			}
			Type t1= stack.top();
			stack.pop();
		}
		virtual void visit(BinaryCompOperatorRule2* e)
		{
//OP_BOOL_LESS
			if(stack.empty())
			{
				throw TypeCheckExeption("Esperado Dado");
			}
			Type t1= stack.top();
			stack.pop();
		}
		virtual void visit(BinaryCompOperatorRule1* e)
		{
//OP_BOOL_GRE
			if(stack.empty())
			{
				throw TypeCheckExeption("Esperado Dado");
			}
			Type t1= stack.top();
			stack.pop();
		}
		virtual void visit(LogicCompRule2* e)
		{
			e -> logiccomp() -> accept(this);
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
		}
		virtual void visit(UnitaryOperatorsRule1* e)
		{
			e -> values() -> accept(this);
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
		}
		virtual void visit(VarForRule2* e)
		{
//L_ID
			if(stack.empty())
			{
				throw TypeCheckExeption("Esperado Dado");
			}
			Type t1= stack.top();
			stack.pop();
			e -> operation() -> accept(this);
		}
		virtual void visit(VarForRule1* e)
		{
			e -> variablestypes() -> accept(this);
//L_ID
			if(stack.empty())
			{
				throw TypeCheckExeption("Esperado Dado");
			}
			Type t1= stack.top();
			stack.pop();
			e -> operation() -> accept(this);
		}
		virtual void visit(CommandRule2* e)
		{
			e -> line() -> accept(this);
		}
		virtual void visit(CommandRule1* e)
		{
			e -> localbody() -> accept(this);
		}
		virtual void visit(ForClause* e)
		{
			e -> varfor() -> accept(this);
			e -> logicoperation() -> accept(this);
			e -> unitaryoperators() -> accept(this);
			e -> command() -> accept(this);
		}
		virtual void visit(WhileClause* e)
		{
			e -> logicoperation() -> accept(this);
			e -> command() -> accept(this);
		}
		virtual void visit(IfElseClause* e)
		{
			e -> logicoperation() -> accept(this);
			e -> command() -> accept(this);
		}
		virtual void visit(ElseClause* e)
		{
			e -> command() -> accept(this);
		}
		virtual void visit(DigitalWriteClauseRule2* e)
		{
			e -> t_digitalwrite() -> accept(this);
			e -> values() -> accept(this);
		}
		virtual void visit(DigitalWriteClauseRule1* e)
		{
			e -> t_digitalwrite() -> accept(this);
			e -> values() -> accept(this);
		}
		virtual void visit(PinModeClauseRule2* e)
		{
			e -> t_pinmode() -> accept(this);
			e -> values() -> accept(this);
		}
		virtual void visit(PinModeClauseRule1* e)
		{
			e -> t_pinmode() -> accept(this);
			e -> values() -> accept(this);
		}
		virtual void visit(IfClause* e)
		{
			e -> logicoperation() -> accept(this);
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
			e -> mainbody() -> accept(this);
		}
		virtual void visit(SetupRule1* e)
		{
		}
		virtual void visit(LoopRule2* e)
		{
			e -> mainbody() -> accept(this);
			e -> loop() -> accept(this);
		}
		virtual void visit(LoopRule1* e)
		{
			e -> loop() -> accept(this);
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
		}
		virtual void visit(LocalBodyRule1* e)
		{
			e -> line() -> accept(this);
			e -> localbody() -> accept(this);
		}
		virtual void visit(BodyRule2* e)
		{
		}
		virtual void visit(BodyRule1* e)
		{
			e -> localbody() -> accept(this);
		}
		virtual void visit(ParametersRule2* e)
		{
			e -> var() -> accept(this);
		}
		virtual void visit(ParametersRule1* e)
		{
			e -> var() -> accept(this);
			e -> parameters() -> accept(this);
		}
		virtual void visit(ParameterRule2* e)
		{
		}
		virtual void visit(ParameterRule1* e)
		{
			e -> parameters() -> accept(this);
		}
		virtual void visit(FunctionRule2* e)
		{
			e -> variablestypes() -> accept(this);
//L_ID
			if(stack.empty())
			{
				throw TypeCheckExeption("Esperado Dado");
			}
			Type t1= stack.top();
			stack.pop();
			e -> parameters() -> accept(this);
		}
		virtual void visit(FunctionRule1* e)
		{
			e -> variablestypes() -> accept(this);
//L_ID
			if(stack.empty())
			{
				throw TypeCheckExeption("Esperado Dado");
			}
			Type t1= stack.top();
			stack.pop();
			e -> parameters() -> accept(this);
			e -> body() -> accept(this);
		}
		virtual void visit(MainArduino* e)
		{
			e -> setup() -> accept(this);
			e -> loop() -> accept(this);
		}
		virtual void visit(MainBodyRule4* e)
		{
			e -> var() -> accept(this);
		}
		virtual void visit(MainBodyRule3* e)
		{
			e -> function() -> accept(this);
		}
		virtual void visit(MainBodyRule2* e)
		{
			e -> var() -> accept(this);
			e -> mainbody() -> accept(this);
		}
		virtual void visit(MainBodyRule1* e)
		{
			e -> function() -> accept(this);
			e -> mainbody() -> accept(this);
		}
};
#endif