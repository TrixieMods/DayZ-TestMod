class CfgPatches
{
	class TestMod
	{
		requiredAddons[]={};
	};
};

class CfgMods
{
	class TestMod
	{
	    type = "mod";
		
	    class defs
	    {
			
			class worldScriptModule		
            {
                value = "";
                files[] = {"TM/TestMod/WorldScripts"};
            };
        };
    };
};