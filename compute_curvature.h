/* $Id: compute_curvature.h,v 1.5 2001/11/06 10:37:55 dsanta Exp $ */
#ifndef _COMPUTE_CURVATURE_PROTO
#define _COMPUTE_CURVATURE_PROTO

#include <reporting.h>

#ifdef __cplusplus
extern "C" {
#endif

  double get_top_angle(const vertex_t*, const vertex_t*, const vertex_t*);
  double get_top_angle2(const vertex_t*, const vertex_t*, const vertex_t*);
  int obtuse_triangle(const vertex_t*, const vertex_t*, const vertex_t*);
  void compute_mean_curvature_normal(const struct model*, 
				     struct info_vertex*, int, 
				     const struct ring_info*, vertex_t*, 
				     double*, double*, double*);
  void compute_curvature(const struct model*, struct info_vertex*, 
			 const struct ring_info*);
  void compute_curvature_error(struct model_error*, struct model_error*, 
			       struct outbuf*);
#ifdef __cplusplus
}
#endif

#endif
