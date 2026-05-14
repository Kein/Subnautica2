#pragma once
#include "CoreMinimal.h"
#include "PerformanceSnapshotMetrics.generated.h"

USTRUCT()
struct FPerformanceSnapshotMetrics {
    GENERATED_BODY()
public:
    UPROPERTY()
    float avg_fps;
    
    UPROPERTY()
    float avg_frame_time;
    
    UPROPERTY()
    float avg_game_thread_time;
    
    UPROPERTY()
    float avg_render_thread_time;
    
    UPROPERTY()
    float avg_gpu_time;
    
    UPROPERTY()
    int32 num_primitives;
    
    UPROPERTY()
    int32 num_actors;
    
    UPROPERTY()
    int32 num_rendered_actors;
    
    UPROPERTY()
    int32 memory_used_physical_mb;
    
    UPROPERTY()
    int32 memory_used_virtual_mb;
    
    UPROPERTY()
    int64 processed_primitives;
    
    UPROPERTY()
    int64 culled_primitives;
    
    UPROPERTY()
    int64 mesh_draw_calls;
    
    UPROPERTY()
    int64 num_triangles_drawn;
    
    UPROPERTY()
    int64 draw_primitive_calls;
    
    UPROPERTY()
    float world_tick_time;
    
    UPROPERTY()
    int64 num_static_mesh_triangles;
    
    UPROPERTY()
    int64 num_skel_mesh_triangles;
    
    UPROPERTY()
    int64 num_gpu_skin_vertices;
    
    UPROPERTY()
    int64 num_skel_mesh_draw_calls;
    
    UWEAUTOMATIONTESTING_API FPerformanceSnapshotMetrics();
};

