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
                files[] = {"mods/src/TestMod/WorldScripts"};
            };
        };
    };
};