#ifndef kernel_management_HPP
#define kernel_management_HPP

class kernel_management{
protected:
    string kernel_stream;
public:
    bool setup_kernel(string path_to_file);
    bool run_kernel();
}
#endif
