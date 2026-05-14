#include "PerformanceSnapshotMetrics.h"

FPerformanceSnapshotMetrics::FPerformanceSnapshotMetrics() {
    this->avg_fps = 0.00f;
    this->avg_frame_time = 0.00f;
    this->avg_game_thread_time = 0.00f;
    this->avg_render_thread_time = 0.00f;
    this->avg_gpu_time = 0.00f;
    this->num_primitives = 0;
    this->num_actors = 0;
    this->num_rendered_actors = 0;
    this->memory_used_physical_mb = 0;
    this->memory_used_virtual_mb = 0;
    this->processed_primitives = 0;
    this->culled_primitives = 0;
    this->mesh_draw_calls = 0;
    this->num_triangles_drawn = 0;
    this->draw_primitive_calls = 0;
    this->world_tick_time = 0.00f;
    this->num_static_mesh_triangles = 0;
    this->num_skel_mesh_triangles = 0;
    this->num_gpu_skin_vertices = 0;
    this->num_skel_mesh_draw_calls = 0;
}

