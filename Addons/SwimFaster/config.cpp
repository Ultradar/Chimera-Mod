class CfgPatches
{
	class SwimFaster
	{
		name="SwimFaster";
		requiredAddons[]={};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class AswmPercMstpSnonWnonDnon;
		class AsswPercMstpSnonWnonDnon;
		class AbswPercMstpSnonWnonDnon;
		class AdvePercMstpSnonWrflDnon;
		class AsdvPercMstpSnonWrflDnon;
		class AbdvPercMstpSnonWrflDnon;
		class AswmPercMrunSnonWnonDf: AswmPercMstpSnonWnonDnon
		{
			speed=0.38;
		};
		class AsswPercMrunSnonWnonDf: AsswPercMstpSnonWnonDnon
		{
			speed=0.38;
		};
		class AbswPercMrunSnonWnonDf: AbswPercMstpSnonWnonDnon
		{
			speed=0.34999999;
		};
		class AdvePercMrunSnonWrflDf: AdvePercMstpSnonWrflDnon
		{
			speed=0.2;
		};
		class AsdvPercMrunSnonWrflDf: AsdvPercMstpSnonWrflDnon
		{
			speed=0.2;
		};
		class AbdvPercMrunSnonWrflDf: AbdvPercMstpSnonWrflDnon
		{
			speed=0.2;
		};
	};
};
