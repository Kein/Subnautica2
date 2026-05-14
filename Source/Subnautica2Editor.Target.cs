using UnrealBuildTool;
using System.Collections.Generic;

public class Subnautica2EditorTarget : TargetRules
{
    public Subnautica2EditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        ExtraModuleNames.AddRange( new string[] { "Subnautica2" } );
        DefaultBuildSettings = BuildSettingsVersion.Latest;
        IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
    }
}
