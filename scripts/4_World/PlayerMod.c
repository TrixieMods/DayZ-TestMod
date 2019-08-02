modded class PlayerBase // modded keyword for modding existing class
{
	
	private int m_numJumps = 0;
	
	override void OnJumpStart()
	{
		super.OnJumpStart();
		m_numJumps++;
		PrintFormat(">>>>>>>>>>>>>>>>>> Jump! #%1", m_numJumps);
	}
	
	override void OnStoreSave(ParamsWriteContext ctx)
	{
		super.OnStoreSave(ctx);
		ctx.Write(m_numJumps);
		PrintFormat(">>>>>>>>>>>>>>>>>> Jums saved: %1", m_numJumps);
	}
	
	override bool OnStoreLoad(ParamsReadContext ctx, int version)
	{
		if ( !super.OnStoreLoad(ctx, version) )
			return false;

		// Format and order of reading must be the same as writing
		int intVal;
		if ( !ctx.Read(intVal) )
			return false;
		
		m_numJumps = intVal;

		PrintFormat(">>>>>>>>>>>>>>>>>> Jums loaded: %1", m_numJumps);
		return true;
	}
	
}