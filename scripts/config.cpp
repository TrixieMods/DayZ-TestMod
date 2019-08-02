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

			class gameScriptModule
			{
				value = "";
				files[] = {"mods\\TestMod\\scripts\\3_game"};
			};
			
			class worldScriptModule		
            {
                value = "";
                files[] = {"mods\\TestMod\\scripts\\4_world"};
            };

			class missionScriptModule
			{
				value = "";
				files[] = {"mods\\TestMod\\scripts\\5_mission"};
			};

        };
    };
};