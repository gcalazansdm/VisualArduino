#ifndef VISITOR_H
#define VISITOR_H
#include "VariablesTypesRule6.h"
#include "VariablesTypesRule5.h"
#include "VariablesTypesRule4.h"
#include "VariablesTypesRule3.h"
#include "VariablesTypesRule2.h"
#include "VariablesTypesRule1.h"
#include "VarRule2.h"
#include "VarRule1.h"
#include "ValuesRule7.h"
#include "ValuesRule6.h"
#include "ValuesRule5.h"
#include "ValuesRule4.h"
#include "ValuesRule3.h"
#include "ValuesRule2.h"
#include "ValuesRule1.h"
#include "ElemRule4.h"
#include "ElemRule3.h"
#include "ElemRule2.h"
#include "ElemRule1.h"
#include "FactorRule3.h"
#include "FactorRule2.h"
#include "FactorRule1.h"
#include "EqRule3.h"
#include "EqRule2.h"
#include "EqRule1.h"
#include "UnitaryLogicalOperator.h"
#include "BinaryLogicalOperatorRule2.h"
#include "BinaryLogicalOperatorRule1.h"
#include "LogicOPRule4.h"
#include "LogicOPRule3.h"
#include "LogicOPRule2.h"
#include "LogicOPRule1.h"
#include "BinaryCompOperatorRule4.h"
#include "BinaryCompOperatorRule3.h"
#include "BinaryCompOperatorRule2.h"
#include "BinaryCompOperatorRule1.h"
#include "LogicCompRule2.h"
#include "LogicCompRule1.h"
#include "UnitaryOperatorsRule2.h"
#include "UnitaryOperatorsRule1.h"
#include "OperationRule3.h"
#include "OperationRule2.h"
#include "OperationRule1.h"
#include "LogicOperationRule2.h"
#include "LogicOperationRule1.h"
#include "VarForRule3.h"
#include "VarForRule2.h"
#include "VarForRule1.h"
#include "CommandRule2.h"
#include "CommandRule1.h"
#include "ForClause.h"
#include "WhileClause.h"
#include "IfElseClause.h"
#include "ElseClause.h"
#include "DigitalWriteClauseRule2.h"
#include "DigitalWriteClauseRule1.h"
#include "PinModeClauseRule2.h"
#include "PinModeClauseRule1.h"
#include "IfClause.h"
#include "IfElseClausesRule2.h"
#include "IfElseClausesRule1.h"
#include "ElseClausesRule2.h"
#include "ElseClausesRule1.h"
#include "SelectionClauseRule2.h"
#include "SelectionClauseRule1.h"
#include "SetupRule2.h"
#include "SetupRule1.h"
#include "LoopRule2.h"
#include "LoopRule1.h"
#include "CondictionRule3.h"
#include "CondictionRule2.h"
#include "CondictionRule1.h"
#include "LineRule3.h"
#include "LineRule2.h"
#include "LineRule1.h"
#include "LocalBodyRule2.h"
#include "LocalBodyRule1.h"
#include "BodyRule2.h"
#include "BodyRule1.h"
#include "ParametersRule2.h"
#include "ParametersRule1.h"
#include "ParameterRule2.h"
#include "ParameterRule1.h"
#include "FunctionRule2.h"
#include "FunctionRule1.h"
#include "MainArduino.h"
#include "MainBodyRule4.h"
#include "MainBodyRule3.h"
#include "MainBodyRule2.h"
#include "MainBodyRule1.h"

class Visitor
{
	public:
		virtual void visit(MainBodyRule1* e) = 0;
		virtual void visit(MainBodyRule2* e) = 0;
		virtual void visit(MainBodyRule3* e) = 0;
		virtual void visit(MainBodyRule4* e) = 0;
		virtual void visit(MainArduino* e) = 0;
		virtual void visit(FunctionRule1* e) = 0;
		virtual void visit(FunctionRule2* e) = 0;
		virtual void visit(ParameterRule1* e) = 0;
		virtual void visit(ParameterRule2* e) = 0;
		virtual void visit(ParametersRule1* e) = 0;
		virtual void visit(ParametersRule2* e) = 0;
		virtual void visit(BodyRule1* e) = 0;
		virtual void visit(BodyRule2* e) = 0;
		virtual void visit(LocalBodyRule1* e) = 0;
		virtual void visit(LocalBodyRule2* e) = 0;
		virtual void visit(LineRule1* e) = 0;
		virtual void visit(LineRule2* e) = 0;
		virtual void visit(LineRule3* e) = 0;
		virtual void visit(CondictionRule1* e) = 0;
		virtual void visit(CondictionRule2* e) = 0;
		virtual void visit(CondictionRule3* e) = 0;
		virtual void visit(LoopRule1* e) = 0;
		virtual void visit(LoopRule2* e) = 0;
		virtual void visit(SetupRule1* e) = 0;
		virtual void visit(SetupRule2* e) = 0;
		virtual void visit(SelectionClauseRule1* e) = 0;
		virtual void visit(SelectionClauseRule2* e) = 0;
		virtual void visit(ElseClausesRule1* e) = 0;
		virtual void visit(ElseClausesRule2* e) = 0;
		virtual void visit(IfElseClausesRule1* e) = 0;
		virtual void visit(IfElseClausesRule2* e) = 0;
		virtual void visit(IfClause* e) = 0;
		virtual void visit(PinModeClauseRule1* e) = 0;
		virtual void visit(PinModeClauseRule2* e) = 0;
		virtual void visit(DigitalWriteClauseRule1* e) = 0;
		virtual void visit(DigitalWriteClauseRule2* e) = 0;
		virtual void visit(ElseClause* e) = 0;
		virtual void visit(IfElseClause* e) = 0;
		virtual void visit(WhileClause* e) = 0;
		virtual void visit(ForClause* e) = 0;
		virtual void visit(CommandRule1* e) = 0;
		virtual void visit(CommandRule2* e) = 0;
		virtual void visit(VarForRule1* e) = 0;
		virtual void visit(VarForRule2* e) = 0;
		virtual void visit(VarForRule3* e) = 0;
		virtual void visit(LogicOperationRule1* e) = 0;
		virtual void visit(LogicOperationRule2* e) = 0;
		virtual void visit(OperationRule1* e) = 0;
		virtual void visit(OperationRule2* e) = 0;
		virtual void visit(OperationRule3* e) = 0;
		virtual void visit(UnitaryOperatorsRule1* e) = 0;
		virtual void visit(UnitaryOperatorsRule2* e) = 0;
		virtual void visit(LogicCompRule1* e) = 0;
		virtual void visit(LogicCompRule2* e) = 0;
		virtual void visit(BinaryCompOperatorRule1* e) = 0;
		virtual void visit(BinaryCompOperatorRule2* e) = 0;
		virtual void visit(BinaryCompOperatorRule3* e) = 0;
		virtual void visit(BinaryCompOperatorRule4* e) = 0;
		virtual void visit(LogicOPRule1* e) = 0;
		virtual void visit(LogicOPRule2* e) = 0;
		virtual void visit(LogicOPRule3* e) = 0;
		virtual void visit(LogicOPRule4* e) = 0;
		virtual void visit(BinaryLogicalOperatorRule1* e) = 0;
		virtual void visit(BinaryLogicalOperatorRule2* e) = 0;
		virtual void visit(UnitaryLogicalOperator* e) = 0;
		virtual void visit(EqRule1* e) = 0;
		virtual void visit(EqRule2* e) = 0;
		virtual void visit(EqRule3* e) = 0;
		virtual void visit(FactorRule1* e) = 0;
		virtual void visit(FactorRule2* e) = 0;
		virtual void visit(FactorRule3* e) = 0;
		virtual void visit(ElemRule1* e) = 0;
		virtual void visit(ElemRule2* e) = 0;
		virtual void visit(ElemRule3* e) = 0;
		virtual void visit(ElemRule4* e) = 0;
		virtual void visit(ValuesRule1* e) = 0;
		virtual void visit(ValuesRule2* e) = 0;
		virtual void visit(ValuesRule3* e) = 0;
		virtual void visit(ValuesRule4* e) = 0;
		virtual void visit(ValuesRule5* e) = 0;
		virtual void visit(ValuesRule6* e) = 0;
		virtual void visit(ValuesRule7* e) = 0;
		virtual void visit(VarRule1* e) = 0;
		virtual void visit(VarRule2* e) = 0;
		virtual void visit(VariablesTypesRule1* e) = 0;
		virtual void visit(VariablesTypesRule2* e) = 0;
		virtual void visit(VariablesTypesRule3* e) = 0;
		virtual void visit(VariablesTypesRule4* e) = 0;
		virtual void visit(VariablesTypesRule5* e) = 0;
		virtual void visit(VariablesTypesRule6* e) = 0;
};
#endif