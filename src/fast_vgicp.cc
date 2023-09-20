#include <nano_gicp/lsq_registration.hpp>
#include <nano_gicp/impl/lsq_registration_impl.hpp>
#include <nano_gicp/fast_vgicp.hpp>
#include <nano_gicp/impl/fast_vgicp_impl.hpp>

template class nano_gicp::FastVGICP<pcl::PointXYZ, pcl::PointXYZ>;
template class nano_gicp::FastVGICP<pcl::PointXYZI, pcl::PointXYZI>;
template class nano_gicp::FastVGICP<pcl::PointNormal, pcl::PointNormal>;
