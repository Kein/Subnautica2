using UnrealBuildTool;
using System.Collections.Generic;

public class Subnautica2Target : TargetRules
{
    public Subnautica2Target(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;
        ExtraModuleNames.AddRange( new string[] { "Subnautica2" } );
        DefaultBuildSettings = BuildSettingsVersion.Latest;
        IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
    }
}
